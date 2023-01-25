class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int nums_sum=0;
        int digit_sum=0;
        int n= nums.size();

        for(int i=0; i<n; i++){
            nums_sum = nums_sum + nums[i];

            if(nums[i]<10){
                digit_sum = digit_sum + nums[i];
            }
            else{
                while(nums[i]>0){
                    int last = nums[i]%10;
                    digit_sum = digit_sum + last;
                    nums[i] = nums[i]/10;
                }
            }
        }
        int ans;
        ans = abs(digit_sum - nums_sum);
        return ans;
    }
};
