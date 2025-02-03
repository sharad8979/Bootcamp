#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<n-i-1;k++){
			printf(" ");
		}
	for(j=0;j<2*i+1;j++){
		
	if(i==n-1 || j==0 || j==(2*i+1)-1){
		printf("*");
	}else{
	 	printf(" ");
	 }
   }
	 printf("\n");
	}
	
	
	return 0;
}
