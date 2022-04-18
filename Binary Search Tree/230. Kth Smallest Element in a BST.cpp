class Solution {
    int res;
public:
    
    void inorder(TreeNode* root, int& k){
        if(root==NULL) return;
        inorder(root->left, k);
        if(--k == 0) res = root->val;
        inorder(root->right, k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return res;
    }
};


/*
Example 1:
Input: root = [3,1,4,null,2], k = 1
Output: 1

Example 2:
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
*/
