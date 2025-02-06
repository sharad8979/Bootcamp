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
int main(){
	int arr[10],i,n;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reverse(arr,0,n-1);
	printf("After sorting=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
