#include<stdio.h>
int main(){
	int n,i,c=2,f=0;
	printf("Enter the range=");
	scanf("%d",&n);
	while(c<=n){
		f=0;
		 for(i=2;i<c;i++){
		 	if(c%i==0){
		 		 f++;
			 }
		 }
		 if(f==0){
		 	printf(" %d",c);
		 }
		 c++;
	}
	
	
	return 0;
}
