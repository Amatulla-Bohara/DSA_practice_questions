class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        const int r=matrix.size();
        const int c=matrix[0].size();
        
        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(matrix[i][j] != matrix[i-1][j-1]){
                    return false;
                }
            }
        }
      return true;
    }
}   
      

/*
Example 1:
Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.

Example 2:
Input: matrix = [[1,2],[2,2]]
Output: false
Explanation:
The diagonal "[1, 2]" has different elements.
*/
