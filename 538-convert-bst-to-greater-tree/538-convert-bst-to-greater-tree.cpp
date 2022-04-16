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
    int ans;
public:
    TreeNode* convertBST(TreeNode* root) {
        
        if(!root) return NULL;
        convertBST(root->right);
        ans+=root->val;
        root->val = ans;
        convertBST(root->left);
        return root;  
    }
};