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
    TreeNode* inOrder(TreeNode* root, TreeNode* res){
        if(!root) return res;
        res=inOrder(root->left,res);
        res->right=root;
        root->left=NULL;
        res=root;
        return inOrder(root->right,res);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp=new TreeNode(0);
        TreeNode* res=temp;
        inOrder(root,res);
        return temp->right;
    }
};