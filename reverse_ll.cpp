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
    bool isPalindrome(ListNode* head) {
        if (!head->next)
            return true;
        ListNode  *curr = head;
        
        ListNode *prev=new ListNode(0);
        ListNode *head1=prev;
        while(curr!=NULL){
            ListNode *temp=new ListNode(curr->val);
            prev->next=temp;
            prev=temp;
            curr=curr->next;
        }
        head1=head1->next;
        curr=head1;
        prev=NULL;
        
        ListNode *front= NULL;
        while (curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        ListNode *temp;
        curr=head;
        temp=prev;

        while (curr && temp){
            if(curr->val!=temp->val)
                return false;
            curr=curr->next;
            temp=temp->next;
        }
        return true;

    }
};
