#include<stdio.h>
int isSorted(int arr[],int n){
	 int i;
	 for(i=1;i<n;i++){
	 	  if(arr[i]<arr[i-1]){
	 	  	   return 0;
		   }
	 }
	 return 1;
}
int main(){
	int arr[10],i,n;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=isSorted(arr,n);
	if(r==0){
		printf("Not sorted");
	}else{
		printf("Sorted");
	}
}
