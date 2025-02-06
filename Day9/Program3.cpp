#include<iostream>
using namespace std;
int main(){
	int arr[5][5],l,h,i,j,n;
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
		for(j=i+1;j<n;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	
	for(i=0;i<n;i++){
		int l=0,h=n-1;
		while(l<h){
			swap(arr[l][i],arr[h][i]);
			l++;
			h--;
		}
	}
	
      	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
