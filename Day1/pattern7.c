#include<stdio.h>
void upper(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		  for(k=i;k<n-1;k++){
		  	printf(" ");
		  }
		for(j=0;j<i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
	
}

void lower(int n){
	int i,j,k;
	for(i=n;i>0;i--){
		  for(k=i;k<n;k++){
		  	printf(" ");
		  }
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
int main(){
	int n,i,j,k;
	scanf("%d",&n);
     upper(n);
     lower(n);
	
	return 0;
}
