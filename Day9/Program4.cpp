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
	
	int top=0,left=0,bottom=n-1,right=n-1;
	while(top<=bottom && left<=right){
		  for(i=left;i<=right;i++){
		  	  cout<<" "<<arr[top][i];
		  	  
		  }
		  top++;
		  for(i=top;i<=bottom;i++){
		  	  cout<<" "<<arr[i][right];
		  	  
		  }
		  right--;
	    if(top<=bottom){
	    	for(i=right;i>=left;i--){
	    		cout<<" "<<arr[bottom][i];
	    		
			}
			bottom--;
		}
		if(left<=right){
			for(i=bottom;i>=top;i--){
				 cout<<" "<<arr[i][left];
				 
			}
			left++;
		}
	
	}
	
	return 0;
}
