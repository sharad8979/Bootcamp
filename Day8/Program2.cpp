#include<iostream>
using namespace std;
int main(){
	int brr[10],arr[10],i,n;
	cout<<"enter size";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	brr[0]=arr[0];
	for(i=1;i<n;i++){
		brr[i]=brr[i-1]*arr[i];
	}
	int prd=1;
	for(i=n-1;i>0;i--){
		brr[i]=brr[i-1]*prd;
		prd=prd*arr[i];
	}
	brr[0]=prd;
	
	cout<<"Array is=";
	for(i=0;i<n;i++){
		cout<<" "<<brr[i];
	}
}
