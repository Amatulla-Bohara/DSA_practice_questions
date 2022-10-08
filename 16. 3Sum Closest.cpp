class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
            int min=INT_MAX,n=nums.size()-1,ans=0;
    
    for(int i=0;i<nums.size()-2;i++)
    {
        int j=i+1,k=n;
        while(j<k)
        {
            int x= abs((nums[i]+nums[j]+nums[k])-target);
            if(x==0)
            {
                return (nums[i]+nums[j]+nums[k]);
            }
            if(x<min)
            {
                min=x;
                ans=nums[i]+nums[j]+nums[k];
            }
            if((nums[i]+nums[j]+nums[k])>target)
                k--;
            else
                j++;
        }
    }  
    return ans;
    }
};


/*
Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Example 2:
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
*/
