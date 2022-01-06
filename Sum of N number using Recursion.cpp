#include <iostream>
using namespace std;

void submition(int i, int sum){
   if(i<1){
       cout<<sum<<endl;
       return;
   }
   submition(i-1, sum+i);
}



int main() {
    int n;
    cin>>n;
	
	submition(n, 0);
	
	return 0;
}

/* 
input - 10;
output - 55
*/
