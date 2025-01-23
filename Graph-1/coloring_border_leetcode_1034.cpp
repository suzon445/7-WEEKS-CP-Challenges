#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
class Solution {
public:
    vector<pair<int,int>> internal;
    void dfs( vector<vector<int>> &grid,int r,int c,int newC,int originalColor){
        if(r < 0 or c < 0 or r >= grid.size() or c >= grid[0].size() or grid[r][c] != originalColor) return;
        grid[r][c] = -newC;
        dfs(grid,r+1,c,newC,originalColor);
        dfs(grid,r-1,c,newC,originalColor);
        dfs(grid,r,c+1,newC,originalColor);
        dfs(grid,r,c-1,newC,originalColor);
        // Below code will be executed while comming back from recursion
        if(!(r == 0 or c == 0 or r == grid.size()-1 or c == grid[0].size()-1 or grid[r+1][c] != -newC or grid[r-1][c] != -newC or grid[r][c+1] != -newC or grid[r][c-1] != -newC)){
            internal.push_back({r,c});
        }

    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int originalC = grid[row][col];
        if(grid[row][col] == color) return grid;
        dfs(grid,row,col,color,originalC);
        for(auto p : internal){
            int i = p.first;
            int j = p.second;
            grid[i][j] = originalC;
        }
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] < 0) grid[i][j] *= -1;
            }
        }
        return grid;
    }
};

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  return 0;
}