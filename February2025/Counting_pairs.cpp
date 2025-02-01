  #include <bits/stdc++.h>
 
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
 

 
void task() {
     ll n,x,y;
     cin >> n >> x >> y;
     vector<int> v(n);
     ll sum = 0;
     for(int i = 0; i < n; i++){
     	cin >> v[i];
     	sum += v[i];
     }
     sort(all(v));
     ll x1 = sum - y, y1 = sum - x;
     x = x1, y = y1;
     ll ans = 0;
     for(int i = 0; i+1 < n; i++){
     	if(v[i] > y) break;
     	ll need1 = x-v[i]-1, need2 = y-v[i];
     	int l1 = i+1, r1 = n-1;
     	while(l1 <= r1){
     		int mid = l1 + (r1-l1)/2;
     		if(v[mid] <= need1){
     			l1 = mid+1;
     		}
     		else r1 = mid-1;
     	}
     	int l2 = i+1, r2 = n-1;
     	while(l2 <= r2){
     		int mid = l2 + (r2-l2)/2;
     		if(v[mid] <= need2){
     			l2 = mid+1;
     		}
     		else r2 = mid-1;
     	}
     	ans += l2-l1;

     }
     cout << ans << endl;
}
 
int main () {
	FIO;
	int tt; cin >> tt;
	while (tt--){
		task();
	} 
		
	return 0;
}
 