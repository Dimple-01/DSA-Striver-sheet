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
        ListNode* newnode= new ListNode();
        ListNode* result= newnode;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        int i,j;
        while(temp1!=nullptr && temp2!=nullptr)
        {
            if(temp1->val <= temp2->val)
            {
                result->next=temp1;
                result=result->next;
                temp1=temp1->next;
                
            }
            else
            {
                result->next=temp2;
                result=result->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=nullptr)
        {
             result->next=temp1;
                result=result->next;
                temp1=temp1->next;
        }
        while(temp2!=nullptr)
        {
              result->next=temp2;
                result=result->next;
                temp2=temp2->next;
        }
        return newnode->next;
    }
};