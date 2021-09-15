class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root==NULL) return ans;
        
        queue <TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
           int count= q.size();
            vector<int> level_node;
            for(int i=0; i<count; i++){
                
            TreeNode* t = q.front();
            q.pop();
            
            if(t->left!=NULL){
                q.push(t->left);
                             }
            if(t->right!=NULL){ 
                q.push(t->right);
                              }
             level_node.push_back(t->val);   
            }
            ans.push_back(level_node);
        }
       return ans;
    }
};






Example 1:
img here

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
