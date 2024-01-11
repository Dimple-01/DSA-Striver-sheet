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
    TreeNode * travelclone(TreeNode* clone, TreeNode* tar)
    {
        // Brute force
        if(clone)
        {
            if(clone-> val == tar-> val)
            return clone;

            TreeNode* lefttree= travelclone(clone->left, tar);
             if(lefttree)
            return lefttree;
           
            TreeNode* righttree=travelclone(clone->right, tar);
            return righttree;
        }
        return NULL;
    }
    TreeNode * travel(TreeNode* root,TreeNode* clone, TreeNode* tar)
    {
       
        if(root)
        {
            if(root->val== tar-> val)
            {
                 return travelclone(  clone, tar);
            }
            TreeNode* lefttree=travel(root->left, clone, tar);
            if(lefttree)
            return lefttree;
           

            TreeNode* righttree=travel(root->right,clone, tar);
            return righttree;
            
            
        }
        return NULL;
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       //travel(original, target);
       return travel(original,cloned, target);
        
    }
};