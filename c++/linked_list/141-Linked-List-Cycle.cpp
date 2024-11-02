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
    bool hasCycle(ListNode *head) {
        ListNode *current=head;
        ListNode *prev=head;

        while(current !=nullptr && current->next!=nullptr){
            current=current->next->next;
            prev=prev->next;

            if(current==prev){
                return true;
            }
        }

        return false;
    }
};