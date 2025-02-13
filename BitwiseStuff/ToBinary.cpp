#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

string to_binary(int x){
    string s;
    while(x > 0){
        s += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout << n << "==" << to_binary(n) << endl;
  return 0;
}