/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>mp;
    void dfs(Node* node){
        Node* copy=new Node(node->val);
        mp[node]=copy;
        for(auto neighbor: node->neighbors){
            //already clone and stored in map
            if(mp.find(neighbor)!=mp.end()){
                copy->neighbors.push_back(mp[neighbor]); 
                //directly push back the clone node from map to neighbor
            } else{
                dfs(neighbor);
                copy->neighbors.push_back(mp[neighbor]);
            }
        } 
    }
    Node* cloneGraph(Node* node) {
       if(!node){
            return nullptr;
       }
       dfs(node);
       return mp[node]; //i.e. copy
    }
};