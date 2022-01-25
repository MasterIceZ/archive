#include <bits/stdc++.h>
using namespace std;

int dp[1010];

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	dp[1] = 1;
	for(int i=2; i<=1000; ++i){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int n;
	cin >> n;
	cout << dp[n] << "\n";
	return 0;
}
