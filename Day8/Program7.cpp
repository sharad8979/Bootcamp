#include<iostream>
using namespace std;
int getWater(int arr[],int n){
	int res=0,i,j;
	for(i=0;i<n-1;i++){
		int lmax=arr[i];
		for(j=0;j<i;j++)
		lmax=max(lmax,arr[j]);
		int rmax=arr[i];
		for(j=i+1;j<n;j++)
		rmax=max(rmax,arr[j]);
		res=res+(min(lmax,rmax)-arr[i]);
	}
	return res;
}
int main(){
	int arr[10],i,n;
	cout<<"Enter size=";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
  int r=getWater(arr,n);
	cout<<"Water="<<r;
	return 0;
}
