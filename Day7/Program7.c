#include<stdio.h>
int findXor2(int n){
	int r=n%4;
	if(r==0){
		return n;
	}
	if(r==1){
		return 1;
	}
	if(r==2){
		return n+1;
	}
	if(r==3){
		return 0;
	}
}
int findXor1(int l,int r){
	return (findXor2(l-1)^findXor2(r));
}
int main(){
	int l,r;
	printf("Enter left and right range=");
	scanf("%d %d",&l,&r);
	int res=findXor1(l,r);
	printf("Xor =%d",res);
	
	
	return 0;
}
