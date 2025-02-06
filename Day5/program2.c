#include<stdio.h>
int majority(int arr[],int n){
	int r=0,c=1,i;
	for(i=1;i<n;i++){
		if(arr[r]==arr[i]){
			 c++;
		}else{
			c--;
		}
		if(c==0){
			r=i;
			c=1;
		}
	}
	int count=0;
	for(i=0;i<n;i++){
		if(arr[i]==arr[r]){
			  count++;
		}
	}
	if(count>(n/2)){
		return arr[r];
	}else{
		return -1;
	}
}
int main(){
	int arr[10],n,i;
	printf("Enter the size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=majority(arr,n);
	if(r!=-1){
	   printf("majority=%d",r);	
	}else{
		printf("Not found");
	}
	
	
	return 0;
}
