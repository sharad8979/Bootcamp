#include<stdio.h>
int main(){
	int i,j,n,c;
	printf("Enter the value of n");
	scanf("%d",&n);
    for(i=0;i<n;i++){
    	  for(j=0;j<i+1;j++){
    	  	  printf("*");
		  }
		  printf("\n");
	}
	c=i;
	for(i=0;i<n;i++){
		 for(j=0;j<c;j++){
		 	printf(" ");
		 }
		for(j=0;j<i+1;j++){
    	  	  printf("*");
		  }

           printf("\n");		 
	}
	c=c+i;
    for(i=0;i<n;i++){
		 for(j=0;j<c;j++){
		 	printf(" ");
		 }
		 for(j=0;j<i+1;j++){
    	  	  printf("*");
		  }
           printf("\n");
	}
	
	return 0;
}
