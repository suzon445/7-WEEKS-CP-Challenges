#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<int> subset_sum(vector<int> arr,int n){
  vector<int> ans;
  
  for(int mask = 0; mask < (1 << n); mask++){
    int sum = 0;
    for(int i = 0; i < n; i++){
      if(mask & (1 << i)){
        sum += arr[i];
      }
    }
    ans.push_back(sum);
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<int> ans = subset_sum(a,n);
  for(auto el : ans)
      cout << el <<' ';
  cout << endl;
  return 0;
}