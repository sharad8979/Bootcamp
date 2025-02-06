#include<iostream>
using namespace std;
void intersection(int arr[],int n,int brr[],int m){
	int i=0,j=0;
	while(i<n && j<m){
		 if(arr[i]<brr[j]){
		       	i++;
		 }else if(brr[j]<arr[i]){
		 	j++;
		 }else{
		 	  cout<<arr[i++]<<" ";
		 	  j++;
		 }
	}
}
void findUnion(int arr[],int n,int brr[],int m){
	int i=0,j=0;
	while(i<n && j<m){
		if(arr[i]<brr[j]){
			cout<<arr[i++]<<" ";
		}else if(brr[j]<arr[i]){
			cout<<brr[j++]<<" ";
		}else{
		   cout<<arr[i++]<<" ";
		   j++;
		}
	}
	
	while(i<n){
		   cout<<arr[i++]<<" ";
	}
	while(j<m){
		   cout<<brr[j++]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[10],brr[10],n,m,i;
	   cout<<"Enter size=";
	   cin>>n;
		for(i=0;i<n;i++){
		    cin>>arr[i];
	}
	cout<<"Enter size=";
	   cin>>m;
		for(i=0;i<m;i++){
		    cin>>brr[i];
	}
	cout<<"Intersection\n";
	intersection(arr,n,brr,m);
	cout<<"\nUnion\n";
	findUnion(arr,n,brr,m);
	return 0;
}
