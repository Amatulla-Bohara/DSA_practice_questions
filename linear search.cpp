#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	int target;
	cin>>target;
	int count = 0;
	
	for(int i=0; i<n ; i++){
	    cin>>arr[i];
	    if(target==arr[i]){
	        cout<<"element found at "<<i<<" and the value of element is "<<arr[i]<<endl;
	        count++;
	    }
	    
	} 
	if(count!=1){
	    cout<<"element not found!! : -1"<<endl;
	}
	return 0;
}


input
5
7
1 3 4 9 5
  
output
element not found!! : -1
