#include<stdio.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
void function(int arr[],int n){
	int l=0,h=n-1,mid=0;
	while(mid<=h){
		 if(arr[mid]==0){
		 	  swap(&arr[l],&arr[mid]);
		 	  l++;
		 	  mid++;
		 }else if(arr[mid]==1){
		 	mid++;
		 }else{
		 	  swap(&arr[mid],&arr[h]);
		 	  h--;
		 }
	}
}
int main(){
	int arr[10],i,n;
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	}
	function(arr,n);
	for(i=0;i<n;i++){
	   printf(" %d",arr[i]);
	}
	
	
	return 0;
}
