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
    ListNode* convert(vector<int> arr)
    {
        ListNode* t=new ListNode(arr[0]);
        ListNode* mover = t;

        for(int i=1;i<arr.size();i++)
        {
            ListNode* newnode= new ListNode(arr[i]);
            mover->next= newnode;
            mover = mover->next;
        }
        return t;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        vector<int>arr;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp1= lists[i];
            if(temp1 == nullptr) continue;
            while(temp1!=nullptr)
            {
                arr.push_back(temp1->val);
                temp1=temp1->next;
            }
        }
        if(arr.empty()) return nullptr;
        sort(arr.begin(),arr.end());
        ListNode* result= convert(arr);
        return result;
    }
};