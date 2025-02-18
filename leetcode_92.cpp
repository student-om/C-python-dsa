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
        if (!head || left == right) return head; // No change needed

        int diff = right - left + 1;
        ListNode *curr = head, *prev = nullptr, *front = nullptr;
        left--;

        // Move `curr` to the starting point
        while (left--) {
            prev = curr;
            curr = curr->next;
        }

        ListNode *a = prev;  // Node before the reversal starts
        ListNode *first = curr;  // First node of the reversed section

        // Reverse `diff` nodes
        while (diff--) {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Connect the reversed part back to the list
        if (a) {
            a->next = prev;
        } else {
            head = prev;  // If left == 1, update head
        }
        
        first->next = curr;
        return head;
    }
};
