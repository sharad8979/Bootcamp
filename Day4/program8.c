#include<stdio.h>
void frequency(int arr[],int n){
	int i,c=1;
     for(i=1;i<=n;i++){
     	 if(arr[i]!=arr[i-1]){
     	 	   printf("\n%d element frequency=%d",arr[i-1],c);
     	 	   c=1;
		  }else{
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
	
	frequency(arr,n);
    return 0;

}
