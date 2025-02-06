#include<stdio.h>
int evenOdd(int arr[],int n){
	int l=1,i,max=-10;
	for(i=1;i<n;i++){
		  if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
		  	  l++;
		  	  if(l>max){
		  	  	  max=l;
				}
		  }else{
		  	  l=1;
		  }
	}
	return max;
}
int main(){
	int arr[10],n,i;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=evenOdd(arr,n);
	printf("length of even-odd= %d",r);
	
	
	return 0;
}
