#include<stdio.h>
void leaders(int arr[],int n){
	int i,curr_ldr=n-1;
	printf("Leaders in array=");
	printf(" %d",arr[curr_ldr]);
	for(i=n-2;i>=0;i--){
		if(arr[curr_ldr]<arr[i]){
			  curr_ldr=i;
			  printf(" %d",arr[curr_ldr]);
		}
	}
}
int main(){

		int arr[10],i,n;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	leaders(arr,n);
return 0;
}
