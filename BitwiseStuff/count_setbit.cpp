#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int count_set_bit(int n){
    return __builtin_popcount(n);
}
int count_set_bit2(int n){
    int cnt = 0;
    while(n > 0){
        cnt++;
        n = (n & (n-1));
    }
    return cnt;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << count_set_bit(n) <<'\n';
  cout << count_set_bit2(n) <<'\n';
  return 0;
}