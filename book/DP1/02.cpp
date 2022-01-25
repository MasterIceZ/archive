#include <bits/stdc++.h>
using namespace std;

int dp[1010];

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
