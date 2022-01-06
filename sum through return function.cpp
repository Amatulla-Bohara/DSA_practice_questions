#include <iostream>
using namespace std;

int submition(int i){
   if(i==0){
       return 0;
     }
  return i+submition(i-1);
}



int main() {
    int n;
    cin>>n;
	
	cout<<submition(n)<<endl;
	
	return 0;
}


/* 
input - 10
output - 55
*/
