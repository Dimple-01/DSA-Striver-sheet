/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root == NULL)
            return ans;
        for(Node* it : root->children )
        {
            auto childnodes = postorder(it);
            ans.insert(ans.end(),childnodes.begin(), childnodes.end()); // concatinating ans and childnodes vector 
            // result.end() specifies the position from where concatination is started
        }
        ans.push_back(root->val);
        return ans;
        
        
    }
};