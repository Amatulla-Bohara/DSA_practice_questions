#include <iostream>
using namespace std;

void counting(int i, int n){
   if(i>n){
       return;
   }
   counting(i+1, n);
   cout<<i<<endl;
}



int main() {
    int n,i;
    cin>>n>>i;
	
	counting(i, n);
	
	return 0;
}


//input - 8  1
//output - 
/*
8
7
6
5
4
3
2
1
*/


  
