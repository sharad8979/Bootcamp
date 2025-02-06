#include<stdio.h>
int main(){
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	if(n&&((n&(n-1))==0)){
		printf("Power of two");
	}else{
		printf("Not power of two");
	}
	
return 0;
}
