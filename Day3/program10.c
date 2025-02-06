#include<stdio.h>
#include<string.h>
int palindrome(char str[] ,int l,int h){
	if(l>=h){
		return 1;
	}
	
	if(str[l]!=str[h]){
		return 0;
	}
	
	return palindrome(str,l+1,h-1);
}
int main(){
	char str[20];
	int n;
	printf("Enter string=");
	scanf("%s",str);
	n=strlen(str);
	int r=palindrome(str,0,n-1);
	if(r==1){
		printf("Palindrome");
	}else{
		printf("Not Palindrome");
	}
}
