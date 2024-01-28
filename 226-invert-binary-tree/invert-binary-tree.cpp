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
    TreeNode* invertTree(TreeNode* root) {
        // swaping values of left and right within the same tree 
        // O(n) time complexity
        // O(n) space compexity
        if(root )
        {
            int s;
            
            stack<TreeNode*> st;
            st.push(root);
            while(! st.empty())
            {
                s= st.size();
                TreeNode* newtree = st.top();
                st.pop();

                TreeNode* temp = newtree-> left;
                newtree->left = newtree->right;
                newtree->right = temp;

                if(newtree->left != NULL) st.push(newtree->left);
                if(newtree->right != NULL) st.push(newtree->right);

                
            }
            
        }
         return root;

        
    }
};