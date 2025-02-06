#include<stdio.h>
int power(int n){
	if(n==0){
		return 1;
	}
	return 2*power(n-1);
}
int main(){
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printf("%d Power of 2 = %d",n,power(n));
	return 0;
}
