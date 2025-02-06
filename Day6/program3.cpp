#include<iostream>
#include<algorithm>
using namespace std;
int function(int arr[],int n,int m){
	if(m>n){
		return -1;
	}
	sort(arr,arr+n);
	int res=arr[m-1]-arr[0];
	for(int i=1; (i+m-1)<n ;i++){
		  res=min(res,arr[i+m-1]-arr[i]);
	}
	return res;
}
int main(){
	int arr[10],m,i,n;
	cout<<"Enter size";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter no. of students=";
	cin>>m;
	int r=function(arr,n,m);
	if(r!=-1){
	    cout<<"Result="<<r;	
	}else{
		cout<<"Not found";
	}
	
	
	
	return 0;
}
