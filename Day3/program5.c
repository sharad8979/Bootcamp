#include<stdio.h>
int sumOfDigits(int n){
	if(n==0){
		return 0;
	}
	return n%10+sumOfDigits(n/10);
	
}
int main(){
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printf("Sum of Digits=%d",sumOfDigits(n));
	return 0;
}
