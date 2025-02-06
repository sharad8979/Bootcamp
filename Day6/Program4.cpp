#include<iostream>
using namespace std;
void commonInThree(int arr[],int n,int brr[],int m,int crr[],int p){
	int i=0,j=0,k=0;
	while(i<n && j<m && k<p){
		if(arr[i]==brr[j] && brr[j]==crr[k]){
			cout<<arr[i]<<" ";
			i++;
			j++;
			k++;
		}else if(arr[i]<brr[j]){
			i++;
		}else if(brr[j]<crr[k]){
			j++;
		}else{ 
		   k++;
		}
	}
}
int main(){
	int arr[10],brr[10],crr[10],n,m,o,i;
	cout<<"Enter size ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter size ";
	cin>>m;
	for(i=0;i<m;i++){
		cin>>brr[i];
	}
	cout<<"Enter size ";
	cin>>o;
	for(i=0;i<o;i++){
		cin>>crr[i];
	}
	cout<<"Common elements=";
	commonInThree(arr,n,brr,m,crr,o);
	return 0;
}
