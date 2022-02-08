//recursive solution:

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            sum = sum +(num%10);
            num = num/10;
        }
        if(sum<10)
            return sum;
        else{
            return addDigits(sum);
        }
    }
};

//O(1) - TC
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            sum = sum +(num%10);
            num = num/10;
        }
        if(sum<10)
            return sum;
        else{
            return addDigits(sum);
        }
    }
};

/*
Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
*/
