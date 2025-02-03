#include<stdio.h>
int main(){\
   int i,j,k,n,c,f;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   	  for(k=0;k<i;k++){
   	  	   printf(" ");
		 }
		 c=1;
		for(j=n-i;j>0;j--){
			 printf("%d",c++);
		} 
		f=c-2;
		for(j=0;j<n-i-1;j++){
		   printf("%d",f--);
		}
		printf("\n");                                        
   }


return 0;
}
