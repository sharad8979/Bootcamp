#include<stdio.h>
void reverse(int arr[],int l,int h){
	while(l<=h){
		int t=arr[l];
		arr[l]=arr[h];
		arr[h]=t;
		l++;
		h--;
	}
}
void rotateByD(int arr[],int n,int d){
	    reverse(arr,0,d-1);
	    reverse(arr,d,n-1);
        reverse(arr,0,n-1);
}
int main(){
		int arr[10],i,n,d;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter number of places=");
	scanf("%d",&d);
	printf("\nBefore rotation=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	rotateByD(arr,n,d);
		printf("\nAfter rotation=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
