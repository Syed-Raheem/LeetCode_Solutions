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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int n=(c/2)+1;
        int k=0;
        while(head!=NULL)
        {
            k++;
            if(k==n)
            {
                break;
            }
            head=head->next;
        }
        return head;
    }
};