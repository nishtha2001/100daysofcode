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
      void dfs(TreeNode* root, int val, TreeNode*& res) {
        if(!root) return;
    
        if(root->val == val) {
            res = root;
        } else if(root->val > val) {
            dfs(root->left, val, res);
        } else if(root->val < val) {
            dfs(root->right, val, res);
        }
        
    }
public:
    
    TreeNode* searchBST(TreeNode* root, int val) {
    TreeNode* res = nullptr;
        dfs(root, val, res);
        
        return res;
  
    }
};