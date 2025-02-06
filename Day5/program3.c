#include<stdio.h>
int subarraySum(int arr[],int n){
	int i,curr=0,max=-3000;
	for(i=0;i<n;i++){
		 curr=curr+arr[i];
		 if(curr>max){
		 	max=curr;
		 }
		 if(curr<0){
		 	curr=0;
		 }
	}
	return max;
}
int main(){
	int arr[10],n,i;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=subarraySum(arr,n);
	printf("maximum sum=%d",r);
	
	return 0;
}
