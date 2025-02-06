#include<stdio.h>
#include<string.h>

void reverse(char str[],int l,int h){
      if(l>=h){
      	return ;
	  }
	  char t=str[l];
	   str[l]=str[h];
	   str[h]=t;
        reverse(str,l+1,h-1);
}
void main(){
	char str[20];
	int n;
	printf("Enter string=");
	scanf("%s",str);
	n=strlen(str);
	reverse(str,0,n-1);
	printf("Reverse of string = %s",str);
}
