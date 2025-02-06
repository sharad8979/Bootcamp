#include<stdio.h>
int countDigit(int n){
	int i;
	if(n==0)
	return 0;
	
	return 1+countDigit(n/10); 
}
int main(){
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printf("Number of digits in %d is %d",n,countDigit(n));
}
