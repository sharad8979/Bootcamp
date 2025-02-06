#include<stdio.h>
int main(){
	int n,rev=0,temp,r;
	printf("Enter any number=");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev == temp){
		printf("Number is palindrome");
	}else{
		printf("Number is not palindrome");
	}
	return 0;
}
