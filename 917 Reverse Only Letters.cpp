class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int start=0;
        int end = s.size()-1;
        
        while(start<end){
           
           if(isalpha(s[start])){
               if(isalpha(s[end])){
                   swap(s[start], s[end]);
                   start++;
                   end--;
               }
               else{
                   end--;
                   continue;
               }
           }
           else{
               start++;
               continue;
           }
          
       }
        return s;
    }
};


Input: s = "ab-cd"
Output: "dc-ba"


Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
