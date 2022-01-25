#include<bits/stdc++.h>
using namespace std;

int C(int n, int r){
	if(r == 0 || r == n || n == 1 || n == 0){
		return 1;
	}
	return C(n - 1, r) + C(n - 1, r - 1);
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n, r;
	cin >> n >> r;
	cout << C(n, r) << "\n";
	return 0;
}
