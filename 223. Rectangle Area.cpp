class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
      int firstx= ax2-ax1;
      int firsty= ay2-ay1;
      int secondx= bx2-bx1;
      int secondy= by2-by1;

      int total_area = (firstx*firsty) + (secondx*secondy) - ((max(min(ax2,bx2)-max(ax1,bx1),0))*(max(min(ay2,by2)-max(ay1,by1),0)));

      return total_area;
    }
};
//max(min(ax2,bx2) - max(ax1,bx1),0) * max(min(ay2,by2) - max(ay1,by1),0);


Example 1:
Rectangle Area
Input: ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2
Output: 45
  
Example 2:
Input: ax1 = -2, ay1 = -2, ax2 = 2, ay2 = 2, bx1 = -2, by1 = -2, bx2 = 2, by2 = 2
Output: 16
