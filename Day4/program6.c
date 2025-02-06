#include<stdio.h>
int removeDuplicate(int arr[],int n){
	int res=1,i;
	for(i=1;i<n;i++){
		 if(arr[i]!=arr[res-1]){
		 	arr[res]=arr[i];
		 	res++;
		 }
	}
	return res;
}
int main(){
			int arr[10],i,n;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
		printf("\nBefore remove duplicate=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	int r=removeDuplicate(arr,n);
		printf("\nAfter remove duplicate=");
	for(i=0;i<r;i++){
		printf(" %d",arr[i]);
	}

return 0;
}
	
	

