/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    void solve(TreeNode* &ans, TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original==0)
            return;
        if(original==target)
            ans=cloned;
        solve(ans,original->left,cloned->left,target);
        solve(ans,original->right,cloned->right,target);
        return;
}
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        solve(ans,original,cloned,target);
        return ans;
    }
};