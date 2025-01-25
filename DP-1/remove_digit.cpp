#include<bits/stdc++.h>
using namespace std;

vector<int> dp;

vector<int> get_digit(int n){
	vector<int> result;
	while(n > 0){
		if(n % 10 != 0){
			result.push_back(n % 10);
		}
		n = n / 10;
	}
	return result;
}

int f(int n){
	//Base case
	if(n == 0) return 0;
	if(n <= 9) return 1;

	vector<int> all_digit = get_digit(n);
    int ans = INT_MAX;
	for(int i = 0; i < all_digit.size(); i++){
		ans = min(ans,f(n-all_digit[i]));
	}

	return 1+ ans;
}
int fbu(int num){

    dp[0] = 0;
    for(int i = 1; i <= 9; i++) dp[i] = 1;

    for(int n = 10; n <= num; n++){

		vector<int> d = get_digit(n);

        int ans = INT_MAX;
	    for(int i = 0; i < d.size(); i++){
		    ans = min(ans,dp[n-d[i]]);
	    }

	    dp[n] = 1+ ans;
    }
    return dp[num];	


}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  dp.clear();
  dp.resize(1000005,-1);
  cout << fbu(n) << endl;

  return 0;
}
