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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *next;
        ListNode *prev;
        ListNode *curr;
        ListNode *before=NULL;
        ListNode *temp=head;
        if(left==1)
        {
            prev=NULL;
        }
        int i=1;
        while(i<left)
        {
            before=temp;
           temp=temp->next;
           i++;
        }
        curr=temp;
        while(i<=right)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
        }
     temp->next=curr;
     if(before!=NULL)
     {
        before->next=prev;
     }
     else
     {
        head=prev;
     }
     return head;
    }
};