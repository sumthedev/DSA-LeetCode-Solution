// problem 206


class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* current = NULL;
        ListNode* next = NULL;
        current = head;

        while(current != NULL) {
         
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;

        }

        return prev;
    }

};