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
        bool solver(TreeNode* root, long long lower= LLONG_MIN, long long upper= LLONG_MAX)
        {
            if(root == NULL)
               return true;

            if(root->val <= lower || root->val >= upper)
            {
                return false;
            }
            return(solver( root-> left,lower, root->val) &&  solver(root-> right, root->val, upper)); 
           
            
        }
        bool isValidBST(TreeNode* root) {
           
            return solver(root);
            
           
           
    }
};