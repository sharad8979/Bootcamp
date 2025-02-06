#include<iostream>
using namespace std;
int maxProfit(int arr[],int n){
	int profit=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			profit+=(arr[i]-arr[i-1]);
		}
	}
	return profit;
}
int main(){
	int arr[10],i,n;
	cout<<"Enter n=";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int r=maxProfit(arr,n);
	cout<<"Profit="<<r;
	
	
	
	return 0;
}
