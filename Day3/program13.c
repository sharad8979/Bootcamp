#include<stdio.h>
int binarySearch(int arr[],int l,int h,int s){
       if(l>h){
       	return -1;
	   }
	   int mid=(l+h)/2;
	   if(arr[mid]==s){
	   	   return mid;
	   }else if(arr[mid]<s){
	   	   binarySearch(arr,mid+1,h,s);
	   }else{
	   	     binarySearch(arr,l,mid-1,s);
	   }	
}
int main(){
	int arr[10],n,i,s;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Enter sorted array=");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter searching element=");
	scanf("%d",&s);
	int r=binarySearch(arr,0,n-1,s);
	if(r==-1){
		printf("Element not found");
	}else{
		printf("Element %d is found at index %d",s,r);
	}
	
	return 0;
}
