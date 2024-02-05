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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
       
        vector<double> avg;
        if(root == NULL)
            return avg;
        
        q.push(root);
        while(!q.empty())
        {    double s = 0.0;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                s += temp->val;
                
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
                
            }
            
            avg.push_back(s/size);
        
           

        }
        return avg;
        //  queue<int> q;
        //  int cnt=0;
        // double s;
        // vector<double> avg;
        // if(root == NULL)
        //     return avg;
        // q.push(root->val);
        // while(!q.empty())
        // {
        //     int size = q.size();
        //     while(size != 0)
        //     {
        //         s+=q.front();
                
        //         q.pop();
        //         cnt++;
        //     }
            
        //     avg.push_back(s/cnt);
        //     if(root->left!= NULL) q.push(root->left->val);
        //     if(root->right!= NULL) q.push(root->right->val);
           

        // }
        // return avg;
        
        
    }
};