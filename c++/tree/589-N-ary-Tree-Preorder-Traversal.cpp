/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    vector<int> preorder(Node* root) {
        if(!root){
            return ans;
        }
        ans.push_back(root->val);
        vector<Node*>children=root->children;
        for(int i=0;i<children.size();i++){
            preorder(children[i]);
        }
        return ans;
    }
};