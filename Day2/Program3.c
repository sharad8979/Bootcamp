#include<stdio.h>
int main(){
	int l;
	printf("Enter year");
	scanf("%d",&l);
	if(((l%4==0)&&(l%100!=0)) || (l%400==0)){
		printf("Leap year");
	}else{
		printf("Not leap year");
	}
}
