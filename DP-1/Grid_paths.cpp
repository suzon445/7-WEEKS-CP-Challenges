#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int dp[1005][1005];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  char grid[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> grid[i][j];
    }
  }
  if(grid[n-1][n-1] == '*') {cout << 0 << endl; return 0;}

  memset(dp,0,sizeof dp);
  dp[n-1][n-1] = 1;

  for(int i = n-2; i >= 0; i--){
    if(grid[i][n-1] == '*') dp[i][n-1] = 0;
    else dp[i][n-1] = dp[i+1][n-1];
  }
  for(int i = n-2; i >= 0; i--){
    if(grid[n-1][i] == '*') dp[n-1][i] = 0;
    else dp[n-1][i] = dp[n-1][i+1];
  }
  for(int i = n-2; i >= 0; i--){
    for(int j = n-2; j >= 0; j--){
      if(grid[i][j] == '*') dp[i][j] = 0;
      else dp[i][j] = (dp[i+1][j] % mod + dp[i][j+1] % mod) % mod;
    }
  }
  
  cout << dp[0][0] << endl;
  return 0;
}
