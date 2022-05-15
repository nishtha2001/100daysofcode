/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0)kn, left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(!root) 
            return 0;
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
		    sum = 0;
            int n=q.size();
            while(n--){
            TreeNode* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            if(!node->left && !node->right) sum+=node->val;
            
        }
        }
        return sum;
        
    }
};