#include <iostream>
using namespace std;

bool is_Palindrome(string s, int i){
    
   int n = s.length();
    
    if(i>=n/2){
        return true;
    }
    
    if(s[i] != s[n-1-i]){
        return false;
       
    }
    is_Palindrome(s, i+1);
}



int main() {
   string s;
   cin>>s;
   
   cout<<is_Palindrome(s, 0)<<endl;
   
	return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------------
  /*
  input - madam
  output  - 1
  input - amatulla
  output - 0
  */
