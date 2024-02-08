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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(); // Dummy node to simplify handling edge cases
        ListNode *ans = dummy;
        ListNode * temp1= list1;
        ListNode * temp2 = list2;

        while(temp1 != nullptr && temp2 != nullptr)
        {
            if( temp1->val <= temp2-> val)
            {
                ans->next= temp1;
                ans= ans->next;
                temp1= temp1-> next;
            }
            else
            {
                ans->next= temp2;
                ans= ans->next;
                temp2 = temp2-> next;
            }
        }
        if( temp1 != nullptr)
        {
               ans->next= temp1;
               temp1= temp1-> next;
               ans= ans->next;
        }
        while( temp2 != nullptr)
        //else
        {
              ans->next= temp2;
              temp2= temp2-> next;
               ans= ans->next;
        }
        return dummy->next;
    }
};