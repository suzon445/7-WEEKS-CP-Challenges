#include<bits/stdc++.h>
using namespace std;

vector<int> dp;
#define mod 1000000007
vector<int> dp;

//Bottom up approach
int fbu(vector<int> &v,int x){
  //Base case
  dp[0] = 1;

  for(int i = 1; i <= x; i++){
    int ans = 0;
    for(auto c : v){
      if(i-c >= 0)
        ans = (ans % mod + dp[i-c] % mod) % mod;
     }
     dp[i] = ans % mod;
  }
  return dp[x];
  
}

// Memoization 
int f(vector<int> &v,int x){
  if(x == 0) return 1;
  //if(x < 0) return 0;
  if(dp[x] != -1) return dp[x];
  int ans = 0;
  for(auto c : v){
    if(x-c >= 0)
      ans = (ans % 1000000007 + f(v,x-c) % 1000000007) % 1000000007;
  }
  return dp[x] = ans % 1000000007;
}
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n , x; cin >> n >> x;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  dp.clear();
  dp.resize(1000005,-1);
  int ans = f(v,x);
  cout << ans << endl;
  return 0;
}
