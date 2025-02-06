#include<stdio.h>
int main(){
	int n,i,arr[10];
	printf("Enter size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ls=0,rs=0;
	for(i=0;i<n;i++){
		rs+=arr[i];
	}
	
	for(i=0;i<n;i++){
		rs=rs-arr[i];
		if(ls==rs){
			printf("index is equilibrium point=%d",i);
			return;
		}
		ls+=arr[i];
	}
	  printf("Not found any point");
	
	return 0;
}
