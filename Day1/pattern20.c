#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("*");
		}
		
		for(j=0;j<2*i;j++){
			printf(" ");
		}
		
		for(j=0;j<n-i;j++){
			printf("*");
		}

		printf("\n");
	}
	
	
	for(i=n-1;i>=0;i--){
		for(j=i;j<n;j++){
			printf("*");
		}
		for(j=0;j<2*i;j++){
			printf(" ");
		}
		
		for(j=i;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
