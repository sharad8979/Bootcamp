#include<iostream>
using namespace std;
int main()
{
	int arr[5][5],i,j,r,c;
	cout<<"Enter row and column";
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	

    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}

	for(i=0;i<r;i++){
		for(j=i+1;j<c;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	
	cout<<endl;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}

	
	return 0;
}

