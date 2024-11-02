/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int totalSum=0;

    void findSum(TreeNode* root,int currNum){
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr){
            totalSum+=(currNum*10 + root->val);
        }
        currNum = currNum * 10 +root->val;
        findSum(root->left,currNum);
        findSum(root->right,currNum);
    }

public:
    int sumNumbers(TreeNode* root) {
        findSum(root,0);
        return totalSum;
    }
};