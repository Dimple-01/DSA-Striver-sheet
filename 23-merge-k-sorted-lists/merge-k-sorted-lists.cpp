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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,
        greater<pair<int,ListNode*>>> pq;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL)
                pq.push({lists[i]->val,lists[i]});
        }
        ListNode* dummynode= new ListNode(-1);
        ListNode* temp= dummynode;
        while(!pq.empty())
        {
            auto popped_ele=pq.top();
            pq.pop();
            if(popped_ele.second->next)
            {
                pq.push({popped_ele.second->next->val,popped_ele.second->next});
            }
            temp->next=popped_ele.second;
            temp=temp->next;
        }
        return dummynode->next;

        
    }
};