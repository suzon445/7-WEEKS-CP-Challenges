#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

class Solution {
public:
vector<vector<int>> dp;
    int fbu(string &s1, string &s2, int n, int m){
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];

    }
    int longestCommonSubsequence(string text1, string text2) {
        dp.clear();
        dp.resize(1005,vector<int> (1005,0));
        int n = text1.size();
        int m = text2.size();
        return fbu(text1,text2,n,m);
        
    }
};

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  return 0;
}