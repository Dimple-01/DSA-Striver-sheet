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
public:

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(cloned == NULL)
        {
            return cloned;
        }
        if(cloned->val == target->val)
        {
           return cloned;
        }
        TreeNode* left_result= getTargetCopy(original, cloned->left, target);
        if(left_result)
            return left_result;

        return getTargetCopy(original, cloned->right, target);
     

        
    }
};