#include<stdio.h>
int getSum(int arr[],int n,int l,int r){
	if(l==0){
		return arr[r];
	}else{
		return arr[r]-arr[l-1];
	}
	
}
int main(){
	int arr[10],i,n,l,r;
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter range=");
	scanf("%d %d",&l,&r);
	
	int ps[n];
	ps[0]=arr[0];
	for(i=1;i<n;i++){
		ps[i]=ps[i-1]+arr[i];
	}
	int res=getSum(ps,n,l,r);
	printf("Sum=%d",res);
}
