  #include <bits/stdc++.h>
 
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
 

 
void task() {
     string s; cin >> s;
     ll sum = 0;
     for(int i = 0; i < s.size(); i++){
     	sum += s[i]-'0';
     }
     //cout << sum << endl;
     sort(all(s));
     int two = count(all(s),'2');
     int three = count(all(s),'3');
     
     for(int i = 0; i <= two; i++){
     	for(int j = 0; j <= three; j++){
     		ll ans = sum + (i*2) + (j*6);
     		if(ans % 9 == 0){
     			cout << "YES" << endl;
     			return;
     		}
     	}
     }
     cout << "NO" << endl;

}
 
int main () {
	FIO;
	int tt; cin >> tt;
	while (tt--){
		task();
	} 
		
	return 0;
}
 