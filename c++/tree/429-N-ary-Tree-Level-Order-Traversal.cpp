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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int k=q.size();
            vector<int> level;

            for(int i=0;i<k;i++){
                Node* node=q.front();
                q.pop();
                level.push_back(node->val);

                vector<Node*> children=node->children;

                for(int j=0;j<children.size();j++){
                    if(children[j]!=nullptr){
                        q.push(children[j]);
                    }
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};