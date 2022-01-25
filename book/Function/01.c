#include <stdio.h>
int f(int a, int b){
	if((a + b) % 2 == 0){
		return a + b;
	}
	return a + b + 1;
}
int main(){
	int a, b, x;
	scanf("%d %d %d", &a, &b, &x);
	printf("%d", f(x, f(a, b)));
	return 0;
}
