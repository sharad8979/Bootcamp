#include<stdio.h>
int getlargest(int arr[],int n){
	int l=0,r=-1,i;
	for(i=1;i<n;i++){
		  if(arr[i]>arr[l]){
		  	r=l;
		  	l=i;
		  }else if(arr[i] != arr[l]){
		  	  if(r==-1 || arr[i]>arr[r]){
		  	  	r=i;
				}
		  }
	}
	return r;
}
int main(){

	int arr[10],i,n;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=getlargest(arr,n);
	 printf("Element found at %d index",r);
	return 0;
}
