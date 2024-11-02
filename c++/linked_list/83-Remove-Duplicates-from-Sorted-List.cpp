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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *l1=head;
        while(l1!=nullptr && l1->next != nullptr){
            if(l1->next->val==l1->val){
                l1->next=l1->next->next;
            }
            else{
                l1=l1->next;
            }
        }
        return head;
    }
};