#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(j==n-1 || j==i || i==0){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
