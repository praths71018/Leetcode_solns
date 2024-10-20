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
    vector<int> sort(vector<int> arr){
        for (int i = 1; i < arr.size(); i++) {
            int key = arr[i];
            int j = i - 1;
            
            // Move elements of arr[0..i-1], that are greater than key,
            // to one position ahead of their current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        return arr;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* mergedList=new ListNode();
        ListNode* head=mergedList;
        vector<int> store;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=nullptr){
                store.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        store=sort(store);
        if(store.empty()){
            return nullptr;
        }
        for(int i=0;i<store.size();i++){
            mergedList->val=store[i];
            if(i!=store.size()-1){
                mergedList->next=new ListNode();
                mergedList=mergedList->next;
            }
        }
        return head;
    }
};