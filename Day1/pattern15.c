#include<stdio.h>
int main(){
	int i,j,k,n,c,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=i;k<n;k++){
			printf(" ");
		}
		c=1;
		for(j=0;j<i+1;j++){
			printf("%d",c++);
		}
		q=i;
		for(j=0;j<i;j++){
			printf("%d",q--);
		}
		printf("\n");
	}
	
	
	return 0;
}
