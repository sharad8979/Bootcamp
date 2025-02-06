#include<stdio.h>
void setBit(int n,int k){
	int x=1;
	x=x<<(k-1);
	if(n&x){
		printf("Set");
	}else{
		printf("Unset");
	}
}
int main(){
	int n,k;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Enter k=");
	scanf("%d",&k);
	setBit(n,k);
	
	
	return 0;
}
