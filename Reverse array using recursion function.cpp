#include <iostream>
using namespace std;

void reverce_array(int arr[], int n){
    int left = 0;
    int right = n-1;
    
    while(right>left){  //by using while loop
        swap(arr[left++], arr[right--]);
    }
}



int main() {
    int n;
    cin>>n;
    int arr[n];
	for (int i=0; i<n; i++){
	    cin>>arr[i];
	}

	reverce_array( arr ,  n);
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------

	
	#include <iostream>
using namespace std;

void reverce_array(int arr[], int left, int right){
   
   if(right<=left){
        return;
    }
    swap(arr[right], arr[left]);
    reverce_array(arr, left+1, right-1);  //this is by using recursion
}



int main() {
    int n;
    cin>>n;
    int arr[n];
	for (int i=0; i<n; i++){
	    cin>>arr[i];
	}

	reverce_array( arr, 0 ,  n-1);
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------

/*
input - 
9
1 5 7 3 12 11 56 66 78

output - 78 66 56 11 12 3 7 5 1 

*/
