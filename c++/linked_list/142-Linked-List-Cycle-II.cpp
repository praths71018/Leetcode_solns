/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            // slow==fast means cycle
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    // Reset the slow pointer to the head of the linked list, and move both pointers one step at a time
                    // until they meet again. The node where they meet is the starting point of the cycle.
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        // If the fast pointer reaches the end of the list without meeting the slow pointer,
    // there is no cycle in the linked list. Return null.
        return nullptr;
    }
};