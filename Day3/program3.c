#include<stdio.h>
int fibo(int n){
	if(n==0 || n==1){
		  return n;
	}
	int ans = fibo(n-1)+fibo(n-2);
	return ans;
}
int main(){
	  int n;
	  printf("Enter term=");
	  scanf("%d",&n);
	  printf("%d term of fibonacci = %d",n,fibo(n));
	  return 0;
}
