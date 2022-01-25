#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n % 2 == 0 && n > 10){
		printf("OK");
	}
	else{
		printf("BAD");
	}
	return 0;
}
