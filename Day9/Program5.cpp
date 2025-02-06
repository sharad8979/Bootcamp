#include<iostream>
using namespace std;
int main(){
	int arr[5][5],i,j,n;
	cout<<"Enter n=";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	
			cout<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<arr[0][i];
	}
	
		for(i=1;i<n;i++){
		cout<<" "<<arr[i][n-1];
	}

	for(i=n-2;i>=0;i--){
		cout<<" "<<arr[n-1][i];
	}

	for(i=n-2;i>=1;i--){
		cout<<" "<<arr[i][0];
	}

	return 0;
}
