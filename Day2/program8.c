#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("%c is in Upper case",ch);
	}else if(ch>=97 && ch<=122){
		printf("%c is in Lower case",ch);
	}else if(ch>=33 && ch<=47){
		 printf("%c is special character",ch);
	}
	
	
	
	return 0;
}
