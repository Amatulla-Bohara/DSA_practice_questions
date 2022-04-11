class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>temp(row, vector<int>(col,0));
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                int newval = (((i*col)+j)+k) % (row*col);
                int newr = newval/col;
                int newc = newval%col;
                temp[newr][newc] = grid[i][j];
            }
        }
        return temp;
    }
};



/*
Example 1:
Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: [[9,1,2],[3,4,5],[6,7,8]]

Example 2:
Input: grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
Output: [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]

Example 3:
Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 9
Output: [[1,2,3],[4,5,6],[7,8,9]]
 
*/
