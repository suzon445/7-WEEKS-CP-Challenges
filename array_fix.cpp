#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans{arr[n-1]};
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > ans.back()){
            ans.push_back(arr[i] % 10);
            ans.push_back(arr[i]/10);
        }
        else ans.push_back(arr[i]);
    }
    cout << (is_sorted(ans.rbegin(),ans.rend()) ? "YES" : "NO");
    cout << endl;
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