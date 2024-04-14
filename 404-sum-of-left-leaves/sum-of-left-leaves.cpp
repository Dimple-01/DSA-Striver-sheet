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
    int dfs(TreeNode* root,int isLeft)
    {
        int s=0;
        if(root==NULL)
        {
            return NULL;
        }
        
       if(!root->left && !root->right && isLeft)
            s+=root->val;
        s+=dfs(root->left,1);
        s+=dfs(root->right,0);
        return s;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root,0);
        
       
    }
};