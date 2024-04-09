/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp= head;
        ListNode* dummy=new ListNode(-1);
        ListNode*mover=dummy;
        vector<int> ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            mover->next=new ListNode(ans[i]);
            mover=mover->next;
        }
        return dummy->next;
        
    }
};