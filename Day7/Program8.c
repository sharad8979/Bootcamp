#include<stdio.h>
int toggleBit(int n,int k){
	return (n^(1<<(k-1)));
}
int main(){
	int n,k;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Enter k=");
	scanf("%d",&k);
	int r=toggleBit(n,k);
	printf("Result=%d",r);
	
	return 0;
}
