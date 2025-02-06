#include<iostream>
using namespace std;
int main(){
	int l,h,arr[10],n,i,c=0,temp[10];
	cout<<"Enter size=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]>0){
			swap(arr[i],arr[c]);
			c++;
	}
 }
    l=0;
    h=n-1;
	while(l<=h){
		swap(arr[l],arr[h]);
		l=l+2;
		h=h-2;
	}	
	for(i=0;i<n;i++){
	     cout<<arr[i];	
	}
	
	
	
	
	return 0;
}
