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
public:
    void traverse(TreeNode* root,vector<int> &leaf){
        if(root==nullptr){
            return;
        }
        if(root->left==nullptr && root->right==nullptr){
            cout << root->val << endl;
            leaf.push_back(root->val);
            return;
        }
        traverse(root->left,leaf);
        traverse(root->right,leaf);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        traverse(root1,leaf1);
        traverse(root2,leaf2);
        if(leaf1==leaf2){
            return true;
        }
        return false;
    }
};