#include<iostream>
using namespace std;
bool isPair(int arr[],int n,int x,int si){
	int i=si,j=n-1;
	while(i<j){
		int sum=arr[i]+arr[j];
		
		if(sum==x){
			return true;
		}else if(sum<x){
			i++;
		}else{
			j--;
		}
	}
	return false;
}

bool isTriplet(int arr[],int n,int x){
	int i;
	for(i=0;i<n-2;i++){
		if(isPair(arr,n,x-arr[i],i+1)){
			return true;
		}
	}
	return false;
}
int main(){
	int arr[10],n,i,sum;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter sum";
	cin>>sum;
	if(isTriplet(arr,n,sum)){
		cout<<"True";
	}else{
		cout<<"false";
	}
}
