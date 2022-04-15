class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
      if(root==NULL) return NULL;
        
      if(low<=root->val && root->val<=high){
          root->left = trimBST(root->left, low, high);
          root->right = trimBST(root->right, low, high);
          return root;
      }
        else if(root->val < low) {
            return trimBST(root->right, low, high);
        }
        else if(root->val > high){
            return trimBST(root->left, low, high);
        }
        return root;
    }
};


/*
Example 1:
Input: root = [1,0,2], low = 1, high = 2
Output: [1,null,2]4

Example 2:
Input: root = [3,0,4,null,2,null,null,1], low = 1, high = 3
Output: [3,2,null,1]
*/
