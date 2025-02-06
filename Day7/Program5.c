#include<stdio.h>
int countSet(int n){
	int c=0;
	while(n>0){
		n=n&(n-1);
		c++;
	}
	return c;
}
int flipBits(int a,int b){
	return countSet(a^b);
}
int main(){
	int a,b;
	printf("Enter a and b=");
	scanf("%d %d",&a,&b);
	int r=flipBits(a,b);
	printf("Number of bits to be flipped=%d",r);
	return 0;
}
