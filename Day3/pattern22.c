#include<stdio.h>
int main(){
	  int n,i,j,k;
	  printf("Enter n=");
	  scanf("%d",&n);
	  for(i=0;i<n;i++){
	  	if(i<n-1){
	  	    for(k=0;k<i;k++){
	  	   	  printf(" ");
			 }
		 for(j=0;j<n-i;j++){
		 	 printf("*");
		 }	 
		 printf("\n");
	  }	
    }
	  	   
	  for(i=0;i<n;i++){
	  	 for(j=0;j<n-i-1;j++){
	  	 	  printf(" ");
		   }
		   for(j=0;j<i+1;j++){
		   	 printf("*");
		   }
		   printf("\n");
	  }
}
