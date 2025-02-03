#include<stdio.h>
void upper(int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
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
	
}
void lower(int n){
	int i,j,k;
		for(i=n-1;i>0;i--){
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
	
}
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	upper(n);
	lower(n);
	
	return 0;
}
