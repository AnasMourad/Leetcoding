/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int> >ret;
    
    void fun(TreeNode * root, int level){
        
        if(root==0){
            return ;
        }
        
        
        if(ret.size()<=level){
            ret.resize(level+1);
        }
        
        ret[level].push_back(root->val);
        
        fun(root->left, level+1);
        fun(root->right, level+1);
        
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
      fun(root, 0);
        return ret; 
    }
};