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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // tc =O(n) and SC = o(n)
        ListNode* fast=head;
        for(int i=0;i< n;i++)
        {
            if (fast == nullptr) return head;
            fast=fast->next;
        }
        if(fast==nullptr)
            return head->next;
        ListNode* slow=head;
        
        while(fast->next != nullptr)
        {
            fast= fast->next;
            slow= slow->next;
        }
       
        ListNode* delnode;
        delnode= slow->next;
        slow->next= slow->next->next;
        delete delnode;
        return head;
    }
};

