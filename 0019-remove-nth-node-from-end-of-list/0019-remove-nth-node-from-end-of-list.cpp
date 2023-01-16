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
        ListNode* p= new ListNode();
        p->val=data;
        if(head==NULL)
        {
            head=p;
            return head;
        }
        p->next=head;
        return p;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* ans=NULL;
        while(head!=NULL)
        {
            ans=INS(ans,head->val);
            head=head->next;
        }
        int c=0;
        ListNode* temp=ans;
        ListNode* sol=NULL;
        while(temp!=NULL)
        {
            c++;
            if(c==n)
            {
                temp=temp->next;
            }
            else
            {
                sol=INS(sol,temp->val);
                temp=temp->next;
            }
        }
        return sol;
    }
};