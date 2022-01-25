#include <bits/stdc++.h>
using namespace std;

int a[1010];

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n, l, r;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	cin >> l >> r;
	auto ub = upper_bound(a + 1, a + n + 1, r);
	auto lb = lower_bound(a + 1, a + n + 1, l);
	cout << ub - lb;
	return 0;
}
