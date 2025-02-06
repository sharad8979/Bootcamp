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
		  if(i%2==0){
		  	  for(j=0;j<c;j++){
		  	  	  cout<<" "<<arr[i][j];
				}
		  }
		  else{
		  	  for(j=c-1;j>=0;j--){
		  	  	   cout<<" "<<arr[i][j];
				}
		  }
	}
	
	
	return 0;
}
