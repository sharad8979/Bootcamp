#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(k=i;k<n;k++){
			printf(" ");
		}
	for(j=0;j<2*i-1;j++){
		if(j==0 || i==n || j==(2*i-1)-1){
			printf("*");
		}else{
		   printf(" ");	
		}
		
	}
	 printf("\n");
	}
	
	
	return 0;
}
