/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool traversal(TreeNode* root, int targetSum, int sum) {
        if (!root){
            return false;
        }
        sum = sum + root->val;
        // this part is dfs
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum){
                return true;
            }
            else{
                return false;
            }
        }
        bool leftAns = traversal(root->left, targetSum, sum);
        bool rightAns = traversal(root->right, targetSum, sum);
        return leftAns || rightAns;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root){
            return false;
        }
        int sum = 0;
        bool ans = traversal(root, targetSum, sum);
        return ans;
    }
};