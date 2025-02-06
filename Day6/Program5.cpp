#include<iostream>
#include<algorithm>
using namespace std;
void sumPairs(int arr[],int n,int sum){
	int l=0,h=n-1,i;
	bool found=false;
	sort(arr,arr+n);
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<"\nPairs\n";
	while(l<h){
		  int curr=arr[l]+arr[h];
		  if(sum==curr){
		  	  cout<<"\n"<<"("<<arr[l]<<","<<arr[h]<<")";
		  	  l++;
		  	  h--;
		  	  found=true;
		  }else if(curr>sum){
		  	    h--;
		  }else{
		  	l++;
		  }
		  
	}
	if(found==false){
		  	cout<<"\nNo pairs found";

}
}
int main(){
	int arr[10],n,i,sum;
	cout<<"Enter size=";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter sum=";
	cin>>sum;
	sumPairs(arr,n,sum);
    return 0;
}
