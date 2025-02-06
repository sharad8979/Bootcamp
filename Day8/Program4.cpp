#include<iostream>
using namespace std;
int peakElement(int arr[],int n){
	int l=0,h=n-1;
	while(l<=h){
		int mid=(l+h)/2;
		if((mid==0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])){
			return mid;
       }
	  if(mid>0 && arr[mid-1]>= arr[mid])
		h =mid-1;
		else
		 l=mid+1;
	}
     return -1;	

}
int main(){
	int arr[10],n,i;
	cout<<"Enter size=";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
		
	int r=peakElement(arr,n);
	if(r!=-1){
		cout<<arr[r];
	}
	else{
	    cout<<"Not found";
	}
	return 0;
}
