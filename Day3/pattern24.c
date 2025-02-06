#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char ch='A';
		for(j=0;j<n-i;j++){
			printf("%c",ch++);
		}
		for(k=0;k<2*i-1;k++){
			printf(" ");
		}
		if(i==0){
			 ch=ch-2;
		}else{
			ch=ch-1;
		}
		 for(j=0;j<n-i;j++){
			printf("%c",ch--);
		}
          printf("\n");
	}
	
	
	
	return 0;
}
