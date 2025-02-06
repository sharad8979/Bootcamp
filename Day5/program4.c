#include<stdio.h>
int maxSumSizeK(int arr[],int n,int k){
	int i,max,sum;
	for(i=0;i<k;i++){
		 sum=sum+arr[i];
	}
	max=sum;
	for(i=k;i<n;i++){
		sum=sum-arr[i-k]+arr[i];
		if(sum>max){
			max=sum;
		}
	}
	return max;
}
int main(){
	int arr[10],n,i,k;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter length=");
	scanf("%d",&k);
	int r=maxSumSizeK(arr,n,k);
	printf(" max sum =%d",r);
	
	return 0;
}
