#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n = 50;
  // we can find last number in this operation
  //50 = 110010
  //49 = 110001
  // n = (n&(n-1)) = 110000
  //again n = 100000 this is our answer
  int ans;
  while(n != 0){
    ans = n;
    n = (n & (n-1));
  }
  cout << ans << '\n';

  return 0;
}