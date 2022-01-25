#include <bits/stdc++.h>
using namespace std;

int a[1010];

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n, x;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	cin >> x;
	cout << upper_bound(a + 1, a + n + 1, x) - (a + 1);
	return 0;
}
