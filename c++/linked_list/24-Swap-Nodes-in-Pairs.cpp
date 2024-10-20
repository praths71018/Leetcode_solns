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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* temp1=temp;
        ListNode* temp2=head;
        while(1){
            if(temp2==NULL||temp2->next==NULL){
                break;
            }
            ListNode* prevNode=temp;
            ListNode* currNode=temp2;
            ListNode* nextNode=temp2->next;
            //swapping 
            currNode->next=nextNode->next;
            prevNode->next=nextNode;
            nextNode->next=currNode;
            //next iteration
            temp=currNode;
            temp2=currNode->next;
        }
        return temp1->next;
    }
};