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
            head->next=NULL;
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        multiset<int> mp;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                mp.insert(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode* ans=NULL;
        for(auto &it : mp)
        {
            ans=INS(ans,it);
        }
        return ans;
        
    }
};