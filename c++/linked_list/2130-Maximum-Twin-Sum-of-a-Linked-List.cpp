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
    int pairSum(ListNode* head) {
        ListNode *count=head;
        vector<int> firstHalf;
        vector<int> secondHalf;
        int n=0;

        while(count!=nullptr){
            n++;
            count=count->next;
        }

        for(int i=0;i<(n/2);i++){
            firstHalf.push_back(head->val);
            head=head->next;
        }

        while(head!=nullptr){
            secondHalf.push_back(head->val);
            head=head->next;
        }
        
        if(firstHalf.empty()){
            int maxSum=0;
            for(int i=0;i<secondHalf.size();i++){
                maxSum+=secondHalf[i];
            }
            return maxSum;
        }

        reverse(secondHalf.begin(),secondHalf.end());
        int maxSum=INT_MIN;
        for(int i=0;i<(n/2);i++){
            int temp=firstHalf[i] + secondHalf[i];
            maxSum=max(temp,maxSum);
        }

        return maxSum;
    }
};