class Solution {
public:
    TreeNode* res = new TreeNode(-1);
    TreeNode* ans = res;
    
    void inorder(TreeNode* root){
        
        
    if(root==NULL){
        return;
    }
        
       inorder(root->left);
        res->right = new TreeNode (root->val);
        res = res->right;
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return ans->right;
    }
};

/*
Example 1:
Input: root = [5,3,6,2,4,null,8,1,null,null,null,7,9]
Output: [1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]

Example 2:
Input: root = [5,1,7]
Output: [1,null,5,null,7]
*/
