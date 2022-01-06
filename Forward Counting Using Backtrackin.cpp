#include <iostream>
using namespace std;

void counting(int i){
   if(i<1){
       return;
   }
   counting(i-1);
   cout<<i<<endl;
}



int main() {
    int i;
    cin>>i;
	
	counting(i);
	
	return 0;
}


/*
input - 7
output - 
1
2
3
4
5
6
7

*/
