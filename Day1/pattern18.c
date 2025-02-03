#include<stdio.h>
int main(){
	int n,i,j,size,min_dis;
	printf("Enter any number=");
	scanf("%d",&n);
	size=2*n-1;
	for(i=0;i<size;i++){
		 for(j=0;j<size;j++){
		 	  min_dis=i;
		 	  if(j<min_dis){
		 	  	min_dis=j;
			   }
			   
			   if(size-i-1<min_dis){
			   	  min_dis-size-i-1;
			   }
			   
			   if(size-j-1<min_dis){
			   	 min_dis=size-j-1;
			   }
			   
			   printf("%d",n-min_dis);
		 }
		 printf("\n");
	}
	
	
	
	
	return 0;
}
