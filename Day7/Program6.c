#include<stdio.h>
int main(){
	int arr[10],n,i,xor1=0,xor2=0;
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n-1;i++){
		xor2=xor2^arr[i];
		xor1=xor1^(i+1);
	}
	xor1=xor1^n;
	int r=xor1^xor2;
        printf("Missing number =%d",r);
	
	return 0;
}
