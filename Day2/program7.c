#include<stdio.h>
int main(){
	int ch;
	float n,r;
	printf("enter 1 for convert m to cm");
	printf("\nenter 2 for convert cm to m");
	printf("\nenter 3 for convert kg to g");
	printf("\nenter 4 for convert g to kg");
	printf("\nenter 5 for convert km to m");
	printf("\nenter 6 for convert m to km");
	scanf("%d",&ch);
	switch(ch){
		case 1 : 
                 printf("Enter number in meter=");
                 scanf("%f",&n);
                 r=n*100;
                 printf("Number in cm=%f",r);
				 break; 		
        case 2 : 
                 printf("Enter number in cm=");
                 scanf("%f",&n);
                 r=n/100;
                 printf("Number in metre=%f",r);
				 break; 		

        case 3 : 
                 printf("Enter number in Kg=");
                 scanf("%f",&n);
                 r=n*1000;
                 printf("Number in gram=%f",r);
				 break; 		

        case 4: 
                 printf("Enter number in gram=");
                 scanf("%f",&n);
                 r=n/1000;
                 printf("Number in Kg=%f",r);
				 break; 		

         case 5 : 
                 printf("Enter number in Km=");
                 scanf("%f",&n);
                 r=n*1000;
                 printf("Number in metre=%f",r);
				 break; 		

         case 6 : 
                 printf("Enter number in meter=");
                 scanf("%f",&n);
                 r=n/1000;
                 printf("Number in km=%f",r);
				 break; 		
	    }
	return 0;
}
