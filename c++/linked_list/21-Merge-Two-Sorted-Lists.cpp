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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode();
        ListNode* head = list3;
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                list3->val = list1->val;
                list1 = list1->next;

            } else if (list2->val < list1->val) {
                list3->val = list2->val;
                list2 = list2->next;
            } else {
                list3->val = list1->val;
                list1 = list1->next;
            }

            if (list1 != nullptr || list2 != nullptr) {
                list3->next = new ListNode();
                list3 = list3->next;
            }
        }
        while (list1 != nullptr) {
            list3->val = list1->val;
            list1 = list1->next;

            if (list1 != nullptr) {
                list3->next = new ListNode();
                list3 = list3->next;
            }
        }
        while (list2 != nullptr) {
            list3->val = list2->val;
            list2 = list2->next;

            if (list2 != nullptr) {
                list3->next = new ListNode();
                list3 = list3->next;
            }
        }
        return head;
    }
};