#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		  for(k=i;k<n;k++){
		  	printf(" ");
		  }
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
