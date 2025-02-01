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
     int b[n-1], arr[n];
     for(int i = 0; i + 1 < n; i++){
     	cin >> b[i];
     }
     arr[0] = b[0];
     arr[n-1] = b[n-2];
     for(int i = 1; i+1 < n; i++){
     	arr[i] = b[i] | b[i-1];
     }

     for(int i = 0; i+1 < n; i++){
     	if(b[i] != (arr[i] & arr[i+1])){
     		cout << -1 << endl;
     		return;
     	}
     }
     for(int i = 0; i < n; i++)
     	cout << arr[i] <<' ';
     cout << endl;
}
 
int main () {
	FIO;
	int tt; cin >> tt;
	while (tt--){
		task();
	} 
		
	return 0;
}
 