  #include <bits/stdc++.h>
 
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
 

 
void task() {
     int n; cin >> n;
     string s,t;
     cin >> s >> t;

     string ans = "YES";
     for(int i = 0; i < n; i++){
     	if(s[i] == '0' and t[i] == '1'){
     		cout << "NO" << endl;
     		return;
     	}
     	if(s[i] == '1'){
     		break;
     	}
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
 