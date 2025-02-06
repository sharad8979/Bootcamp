#include<stdio.h>
int max(int m,int c){
	if(m>c){
		return m;
	}else{
		
	}
}
int consecutiveOne(int arr[],int n){
	int c=0,m=0;
	for(i=0;i<n;i++){
		 if(arr[i]==1){
		 	 c++;
		 	 m=max(m,c);
		 }else{
		 	  c=0;
		 }
	}
	return m;
}
int main(){
	int arr[10],n,i;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=consecutiveOne(arr,n);
	printf("%d",r);
	
	return 0;
}
