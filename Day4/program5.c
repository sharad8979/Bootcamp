#include<stdio.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void moveZero(int arr[],int n){
	int c=0,i;
	for(i=0;i<n;i++){
		 if(arr[i]!=0){
		 	 swap(&arr[i],&arr[c]);
		 	 c++;
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
	
		printf("\nBefore moving=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	moveZero(arr,n);
		printf("\nAfter moving=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
return 0;
}
