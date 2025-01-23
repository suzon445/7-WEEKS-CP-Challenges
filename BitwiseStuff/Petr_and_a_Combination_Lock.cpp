#include<bits/stdc++.h>
using namespace std;

bool f(vector<int> &v,int n){
	for(int mask = 0; mask < (1 << n); mask++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(mask & (1 << i))
				sum += v[i];
			else sum -= v[i];
		}
		if(sum % 360 == 0){
			return true;
			break;
		}
	}
	return false;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  	cin >> v[i];

  bool ok = f(v,n);
  if(ok){
  	cout << "YES" << endl;
  }
  else
  	cout << "NO" << endl;
  return 0;
}
