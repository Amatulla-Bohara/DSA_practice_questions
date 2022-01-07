#include <iostream>
using namespace std;

//using one pointer


void reverce_array(int arr[], int n, int i){
  
   if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverce_array(arr, n, ++i);
}



int main() {
    int n;
    cin>>n;
    int arr[n];
	for (int i=0; i<n; i++){
	    cin>>arr[i];
	}

	reverce_array( arr,n, 0);
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------------

  /*
  
input- 
9
1 5 7 3 12 11 56 66 78

output - 
78 66 56 11 12 3 7 5 1 

*/
