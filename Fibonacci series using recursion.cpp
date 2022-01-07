#include <iostream>
using namespace std;

int fib(int n){
    
    if(n<=1){
        return n;
    }
    
    int first = fib(n-1);
    int second_last = fib(n-2);
    
    return first+second_last;
  
}



int main() {
   int n;
   cin>>n;
   
   cout<<fib(n)<<endl;
   
	return 0;
}


-------------------------------------------------------------------------------------------------------------------------------------------
  
  /* 
  input - 8
  output - 21
  */
