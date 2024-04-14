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
int bfs(TreeNode* root,queue<TreeNode*> qu)
{
    int s=0;
    if(root==NULL)
        return 0;

    qu.push(root);
    while(!qu.empty())
    {
        TreeNode* nodes= qu.front();
        qu.pop();
        if(nodes->left!=nullptr)
        {
            if(nodes->left->left == nullptr && nodes->left->right == nullptr)
            {
                s+=nodes->left->val;
            }
            else{
                qu.push(nodes->left);
            }
        }
        if(nodes->right!=nullptr)
            qu.push(nodes->right);
    }
    return s;

}
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> qu;
        return bfs(root,qu);
        
    }
};