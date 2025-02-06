#include<iostream>
#include<algorithm>
using namespace std;
void function(int arr[],int n,int k){
	int i,c=1;
	sort(arr,arr+n);
	for(i=1;i<n;i++){
		 if(arr[i]==arr[i-1]){
		 	c++;
		 	if(c>(n/k)){
		 		cout<<arr[i]<<" ";
			 }
		 }else{
		 	c=1;
		 }
	}
}
int main(){
	int arr[10],n,i,k;
	cout<<"Enter size";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter k=";
	cin>>k;
	function(arr,n,k);
	
	
	return 0;
}
