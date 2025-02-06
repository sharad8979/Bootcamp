#include<stdio.h>
int givenSum(int arr[],int n,int sum){  
	  int s=0,e=0,curr=0;
	  for(e=0;e<n;e++){
	  	  curr=curr+arr[e];
	  	  while(sum<curr){
	  	  	  curr=curr-arr[s];
	  	  	  s++;
			}
			if(curr==sum){
				return 1;
			}
	  }
	  return 0;
}
int main(){
	int arr[10],n,i,sum;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter sum=");
	scanf("%d",&sum);
	int r=givenSum(arr,n,sum);
	if(r==1){
	   printf("Found ");	
	}else{
		printf("Not found");
	}
	
	
	return 0;
}
