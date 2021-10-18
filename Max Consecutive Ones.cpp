class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maximum=INT_MIN;
        int count=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                count++;
            }
            else{
                count=0;
            }
            maximum = max(maximum,count);
        }
        return maximum;
    }
};



/*

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

*/
