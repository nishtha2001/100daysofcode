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
    vector<TreeNode*> result(int s, int e){
        vector<TreeNode*>res;
        
        if(s>e) return {NULL};
        if(s==e) 
            return {new TreeNode(s)};
        
        for(int i=s;i<=e;i++){
            vector<TreeNode*> left=result(s,i-1), right=result(i+1,e);
            
            for(auto l:left)
            for(auto r: right)
                res.push_back(new TreeNode(i,l,r));
            
        }
        return res;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
    vector<TreeNode*> res = result(1,n);
        return res;
    }
};