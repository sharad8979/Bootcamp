#include<stdio.h>
int main(){
	int n,i,j,k;
	char ch;
	printf("Enter value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		  for(k=0;k<n-i-1;k++){
		  	  printf(" ");
		  }
		  ch='A';
		  for(j=0;j<i+1;j++){
		  	  printf("%c",ch);
		  	  ch++;
		  }
		  ch=ch-2;
		  for(j=0;j<i;j++){
		  	printf("%c",ch);
		  	ch--;
		  }
		  
		  
		  
		  printf("\n");
	}
	
	return 0;
}
