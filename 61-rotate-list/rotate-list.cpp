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
    ListNode* findLastNode(ListNode * head, int n)
    {   int cnt=1;
        ListNode* temp1=head;
        while(cnt !=n)
        {
            temp1=temp1->next;
            cnt++;
        }
        return temp1;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0) return head;
        int cnt=1;
        ListNode* temp= head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        if(k%cnt == 0 ) return head;
        k=k%cnt;

        temp->next=head;
        ListNode* newLastNode=findLastNode(head,cnt-k);
        head=newLastNode->next;
        newLastNode->next= NULL;
        return head;
        
        


        
    }
};