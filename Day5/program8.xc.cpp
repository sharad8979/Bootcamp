#include<stdio.h>
int equilibrium(int arr[],int n){
	 
}
int main(){
	int arr[10],n,i;
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int r=equilibrium(arr,n);
	if(r==1){
		printf("True");
	}else{
		printf("False");
	}
	return 0;
}
