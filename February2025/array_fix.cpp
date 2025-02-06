#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<int> digit(int n){
    vector<int> res;
    while(n > 0){
        res.push_back(n % 10);
        n /= 10;
    }
    return res;
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(arr[i] < 10){
            ans.push_back(arr[i]);
        }
        else{
             vector<int> cur = digit(arr[i]);
             for(auto x : cur){
                ans.push_back(x);
             }
        }
    }
    for(int i = 1; i < ans.size(); i++){
        if(ans[i] < ans[i-1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc; cin >> tc;
  while(tc--){
    solve();
  }
  return 0;
}