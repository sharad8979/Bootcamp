#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		  for(k=i;k<n-1;k++){
		  	printf(" ");
		  }
		for(j=0;j<i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
