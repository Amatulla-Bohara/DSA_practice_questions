class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();    //size of the array
        
        if(n < 3)     //if size of array is less than 3 then we need to return false by default because in constraints, range of nums length is [1 , 5*10^5]
            return false;
        
        //we initilize two integer with INT_MAX value.
        int left = INT_MAX;
        int mid = INT_MAX;
        
        // traverse the whole array.
        for(int i = 0; i < n ; i ++)
        {
            //if nums[i] is greater than mid means nums[i] is also greater than left means two elements before index i is less than nums[i] and that are left and mid. we find that it sataisfy the condition of triplet so we return true.
            if(nums[i] > mid)
                return true;
            
            //if nums[i] is greater than left and less than mid then it is clear that we find b in a < b < c because it is quite possible that c can be INT_MAX.
            else if(nums[i] > left && nums[i] < mid)
                mid = nums[i];
            
            //if nums[i] less than left then we update the value of left to nums[i] because we find a smaller element than it's previous value.
            else if(nums[i] < left)
                left = nums[i];
        }
        
        //when we traversed whole array means there is no triplet so we return false.
        return false;
    }
};

/*
Example 1:
Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

Example 2:
Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.

Example 3:
Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
*/
