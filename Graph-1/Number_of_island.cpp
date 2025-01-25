#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        int ans = 0;
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                //check its zero
                if(grid[r][c] == '0') continue;
                //BFS
                ans++;
                queue<pair<int,int>> q;
                q.push({r,c});
                while(not q.empty()){
                    auto curr = q.front();
                    q.pop();
                    int curR = curr.first;
                    int curC = curr.second;
                    //check down
                    if(curR-1 >= 0 and grid[curR-1][curC] == '1'){
                        q.push({curR-1,curC});
                        grid[curR-1][curC] = '0';
                    }
                    //check up
                    if(curR+1 < rows  and grid[curR+1][curC] == '1'){
                        q.push({curR+1,curC});
                        grid[curR+1][curC] = '0';
                    }
                    //check left
                    if(curC-1 >= 0 and grid[curR][curC-1] == '1'){
                        q.push({curR,curC-1});
                        grid[curR][curC-1] = '0';
                    }
                    //check up
                    if(curC+1 < cols and grid[curR][curC+1] == '1'){
                        q.push({curR,curC+1});
                        grid[curR][curC+1] = '0';
                    }
                }

            }
        }
        return ans;
    }
};

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  return 0;
}