#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];

int nCr(int n, int r){
	if(n == 1 || n == r || n == 0 || r == 0){
		return dp[n][r] = 1;
	}
	if(dp[n][r]){
		return dp[n][r];
	}
	return dp[n - 1][r] + dp[n - 1][r - 1];
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n, l, r;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> dp[i];
		dp[i] += dp[i - 1];
	}
	cin >> l >> r;
	cout << dp[r] - dp[l - 1] << "\n";
	return 0;
}
