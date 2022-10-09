class Solution {
public:
    vector<int> inorder(TreeNode * root, vector<int>&ans)//inorder traversal
    {
        if(root == NULL)
            return ans;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        ans = inorder(root,ans);//we get all nodes of tree in sorted order in array ans
        int a = 0, b = ans.size()-1;//two pointers approach
        while(a < b)
        {
            if(ans[a]+ans[b] < k)
                a++;
            else if(ans[a]+ans[b] > k)
                b--;
            else
                return 1;
        }
        return 0;
    }
};


/*
Example 1:
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true

Example 2:
Input: root = [5,3,6,2,4,null,7], k = 28
Output: false
*/
