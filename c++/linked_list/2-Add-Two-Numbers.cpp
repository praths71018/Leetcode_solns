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
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        int carry=0;
        ListNode* l3=new ListNode();
        ListNode* head=l3;
        while(l1!=nullptr && l2!=nullptr){
            l3->val=l1->val+l2->val + carry;
            // cout << l3->val << endl;
            if(carry==1){
                carry=0;
            }
            if(l3->val>=10){
                carry=1;
                l3->val-=10;
            }
            cout<< l3->val << endl;
            if(l1->next!=nullptr && l2->next!=nullptr){
                l3->next=new ListNode();
                l3=l3->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=nullptr || l2!=nullptr){
                l3->next=new ListNode();
                l3=l3->next;
        }
        // cout << carry << endl;
        // cout << l3->val << endl;
        while(l1!=nullptr){
            l3->val=l1->val+carry;
            if(carry==1){
                carry=0;
            }
            if(l3->val>=10){
                carry=1;
                l3->val-=10;
            }
            if(l1->next!=nullptr){
                l3->next=new ListNode();
                l3=l3->next;
            }
            l1=l1->next;
        }
        while(l2!=nullptr){
            l3->val=l2->val+carry;
            if(carry==1){
                carry=0;
            }
            if(l3->val>=10){
                carry=1;
                l3->val-=10;
            }
            if(l2->next!=nullptr){
                l3->next=new ListNode();
                l3=l3->next;
            }
            l2=l2->next;
        }
        if(carry==1){
            l3->next=new ListNode();
            l3=l3->next;
            l3->val=carry;
        }
        return head;
    }
};