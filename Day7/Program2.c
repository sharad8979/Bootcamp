#include<stdio.h>
int main(){
	int n,c=0;
	printf("Enter n=");
	scanf("%d",&n);
	while(n>0){
		n=n&(n-1);
		c++;
	}
	printf("No. of set bit=%d",c);
	
	return 0;
}
