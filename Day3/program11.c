#include<stdio.h>
void fiboPrint(int n,int a,int b){
	if(n<3){
		return;
	}
	int c=a+b;
	printf(" %d",c);
	fiboPrint(n-1,b,c);
	
}
int main(){
	int n;
	printf("Enter number=");
	scanf("%d",&n);
	if(n==1){
		printf(" %d",0);
	}else if(n==2){
		printf(" %d %d",0,1);
	}else{
		printf(" %d %d",0,1);
		fiboPrint(n,0,1);
	}
}
