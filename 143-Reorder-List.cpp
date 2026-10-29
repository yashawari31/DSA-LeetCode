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
    void reorderList(ListNode* head) {
        
      if(head==NULL || head->next==NULL)
         return;

       ListNode *slow=head;
       ListNode *fast=head;
       while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)
       {
         slow=slow->next;
         fast=fast->next->next;
       }

       ListNode *prev=NULL;
       ListNode *next=NULL;
       ListNode *curr=slow->next;
       slow->next=NULL;

       while(curr!=NULL)
       {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
       }
      ListNode *first=head;
      ListNode *sec=prev;
       while( first!=NULL && sec!=NULL)
       {
         ListNode *postfirst=first->next;
         ListNode *postsec=sec->next;

         first->next=sec;
         sec->next=postfirst;

         first=postfirst;
         sec=postsec;
       }

    }
};