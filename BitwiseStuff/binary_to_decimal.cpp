#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int b_to_d(string &s){
    int n = s.size();
    int result = 0;
    for(int i = n-1; i >= 0; i--){
        char ch = s[i];
        int num = ch-'0';
        result += num*(1 << (n-i-1));
    }
    return result;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  cout << b_to_d(s) << '\n';
  return 0;
}