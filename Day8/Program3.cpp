#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i,sum;
	cout<<"Enter size=";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter target sum=";
	cin>>sum;
	int l=0,h=n-1;
	while(l<=h){
		if(arr[l]+arr[h]==sum){
			cout<<"("<<arr[l]<<","<<arr[h]<<")";
			return 0;
		}
		if(arr[l]+arr[h] < sum){
			  l++;
		}
		if(arr[l]+arr[h] > sum){
			h--;
		}
	}
	
	return 0;
}
