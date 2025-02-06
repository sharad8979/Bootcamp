#include<stdio.h>
int pow1(int n,int p){
	int i,r=1;
	for(i=1;i<=p;i++){
		r=r*n;
	}
	return r;
}
int main(){
	int n,temp,r=0,sum=0,num,p=0;
	printf("Enter number=");
	scanf("%d",&n);
	temp=n;
	num=n;
	while(temp!=0){
		temp=temp/10;
		p++;
	}
	while(num!=0){
		r=num%10;
		sum=sum+pow1(r,p);
		num=num/10;
	}
	if(sum == n){
		printf("Number is Armstrong");
		
	}else{
		printf("Number is not Armstrong");
	}
	
	return 0;
}
