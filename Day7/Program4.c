#include<stdio.h>
int main(){
	int n,arr[10],i,res=0;
	printf("Enter size=");
	scanf("%d",&n);
	printf("enter array=");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		res=res^arr[i];
	}
	printf("Odd Occuring number=%d",res);
	
	return 0;
}
