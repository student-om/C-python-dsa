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
    ListNode* reverseList(ListNode* head) {
        int count=0;
        Node* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count/=2;
        Node* prev=NULL;
        Node* curr=head;
        Node* front=NULL;
        while(count--){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;

    }
};
