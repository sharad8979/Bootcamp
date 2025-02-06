#include<stdio.h>
int main(){
	int a,b,c,ch;
	printf("Enter 1 for angles=");
	printf("\nEnter 2 for sides=");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
		         printf("Enter threee angles=");
	              scanf("%d %d %d",&a,&b,&c);
	              if(((a+b+c)>0) && (a+b+c==180)){
	              	      printf("Valid Traingle");
				  }else{
				  	  printf("Invalid traingle");
				  }
				  break;
 
       case 2:
                printf("Enter threee sides=");
	              scanf("%d %d %d",&a,&b,&c);
	              if((a+b)>c && (b+c)>a && (a+c)>b){
	              	   printf("Valid Traingle");
				  }else{
				  	   printf("Invalid traingle");
				  }
				  break;
				  
		default :
		            printf("Invalid traingle");		  
   	}
		
	return 0;
	
}
