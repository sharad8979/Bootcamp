#include<stdio.h>
int main(){
	int i,j,n;
	char ch ='A';
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ch='A';
		for(j=0;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	
	
	return 0;
}
