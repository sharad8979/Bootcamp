#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		 for(k=i;k<n-1;k++){
		 	printf(" ");
		 }
		for(j=0;j<i+1;j++){
			if(j==0 || j==i || i==n-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
