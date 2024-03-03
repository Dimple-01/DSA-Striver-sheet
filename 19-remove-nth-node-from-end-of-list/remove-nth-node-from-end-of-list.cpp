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
    int lengthmeasure(ListNode* head)
    {
        int len=0;
        while(head != 0)
        {
            head= head->next;
            len++;
        }

        return len;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int len= lengthmeasure(head);
       if (len == n)
       return head->next;

        ListNode* temp= head;
        int cnt=1;
        
        int fromstart = len - n;
       
        while(cnt < fromstart)
        {
            temp= temp->next;
            cnt++;
        }

        if(temp->next==NULL)
            return NULL;
        
        temp->next = temp->next->next;
        return head;
      
        
    }
};