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
    bool isUnival(TreeNode* root, int x)
    {
        if(root == NULL)
            return true;
        if(root->val != x)
            return false;
        
        return (isUnival(root->left,x) && isUnival(root->right,x));
        
    }
    bool isUnivalTree(TreeNode* root) {
       
        
            int x=root->val;

        return isUnival(root, x);
        
    }
};