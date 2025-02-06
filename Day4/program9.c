#include<stdio.h>
int maxDiff(int arr[],int n){
	int res=arr[1]-arr[0];
	int min_ele=arr[0],i;
	for(i=1;i<n;i++){
		 if(arr[i]-min_ele>res)
		     res=arr[i]-min_ele;
		     
		     if(arr[i]<min_ele){
		     	 min_ele=arr[i];
			 }
	}
	return res;
}
int main(){
	int arr[10],i,n;
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=maxDiff(arr,n);
	printf("Maximum difference = %d",r);
	
	return 0;
}
