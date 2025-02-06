#include<stdio.h>
int main(){
	char ch;
	printf("Enter character=");
	scanf("%c",&ch);
	 if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') ){
	      if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'){
	      	  printf("%c is vowel",ch);
		  }else{
		  	 printf("%c is consonant",ch);
		  } 	
	 }else{
	 	  printf("%c is special symbol",ch);
	 }
	
}
