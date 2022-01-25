#include <bits/stdc++.h>
using namespace std;

int a[1010];

bool check(int n){
	for(int i=1; i<=n; ++i){
		if(a[i] > a[i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	do{
		for(int i=1; i<n; ++i){
			if(a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
			}
		}
	}while(check(n));
	for(int i=1; i<=n; ++i){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
