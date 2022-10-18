class Solution {
public:
    string countAndSay(int n) {
        // base case
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        // take a string equals 11
        string str = "11";
        
        // now we need the value of nth term so we loop from 3 -> n
        for(int i=3; i<=n ; i++)
        {
            // temp will have the ans of the next iteration i.e value of the next ith data
            string temp = "";
            str = str+"&"; // add a delimeter at the end
            int cnt = 1; // counter 
            
            // now loop from 1st value to last value
            for(int j = 1; j<str.length(); j++)
            {
                // this condition should be satisfied, if not that means new number has started occurring
                if(str[j]!=str[j-1])
                {
                    temp = temp + to_string(cnt); // add the counter to temp
                    temp = temp + str[j-1]; // add the data of the counter
                    cnt = 1; // reset the counter to 1
                }
                else
                    cnt++; // just count the freq of that number
            }
            str = temp;
        }
        
    return str;
    }
};




/*
Example 1:
Input: n = 1
Output: "1"
Explanation: This is the base case.

Example 2:
Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
*/
