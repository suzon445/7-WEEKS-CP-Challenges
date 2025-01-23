#include<bits/stdc++.h>
using namespace std;


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,l,r,x;
  cin >> n >> l >> r >> x;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
  	cin >> v[i];
  }
  int cnt = 0;
  for(int mask = 0; mask < (1 << n); mask++){
		int sum = 0;
		int mx = 0,mn = INT_MAX;
		for(int i = 0; i < n; i++){
			if(mask & (1 << i)){
				sum += v[i];
				mn = min(mn,v[i]);
				mx = max(mx,v[i]);
			}
		}
		if(mx-mn >= x and sum >= l and sum <= r){
			cnt++;
		}
	}
	cout << cnt << endl;

  return 0;
}
