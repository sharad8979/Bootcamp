#include<stdio.h>
int main(){
	int l;
	scanf("%d",&l);
	if(l%4==0){
		 if(l%100==0){
		 	  if(l%400==0){
		 	  	  printf("Leap year");
			   }else{
			   	printf("Not leap year");
			   }
		 }else{
		 	 printf("Leap year");
		 }
	}else{
		printf("Not leap year");
	}
	
	
	return 0;
}
