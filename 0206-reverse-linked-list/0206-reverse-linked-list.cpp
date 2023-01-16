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
    ListNode* INS(ListNode* head,int data)
    {
        ListNode* p=new ListNode();
        p->val=data;
        p->next==NULL;
        if(head==NULL)
        {
            head=p;
            return head;
        }
        p->next=head;
        return p;
    }
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* ans=NULL;
        while(head!=NULL)
        {
            ans=INS(ans,head->val);
            head=head->next;
        }
        return ans;
    }
};