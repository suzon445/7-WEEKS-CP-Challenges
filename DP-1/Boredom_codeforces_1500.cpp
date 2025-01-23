#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<ll> dp;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<ll> v(100005,0),cnt(100005,0);
  for(int i = 1; i <= n; i++){
    cin >> v[i];
    cnt[v[i]]++;
  }
  dp.resize(100005,0);
  dp[1] = cnt[1];
  for(int i = 2; i <= 100000; i++){
    dp[i] = max(dp[i-1],cnt[i]*i+dp[i-2]);
  }
  cout << dp[100000] << endl;
  return 0;
}