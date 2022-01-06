#include <iostream>
using namespace std;

int factorial(int i){
   if(i==1){
       return 1;
     }
  return i*factorial(i-1);
}



int main() {
    int n;
    cin>>n;
	
	cout<<factorial(n)<<endl;
	
	return 0;
}


/* 
input - 10
output - 3628800
*/
