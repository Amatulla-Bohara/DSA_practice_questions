class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0;
        int high = m*n-1;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
           else if(matrix[mid/m][mid%m]<target){
               low = mid+1;
           }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};

/*
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/
