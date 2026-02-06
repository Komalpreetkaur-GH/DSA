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
    vector<vector<int>> res;
    void bfs(Node* root){
        if(!root){
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                Node* curr=q.front();
                q.pop();
                temp.push_back(curr->val);

            for(Node* child: curr->children){
                q.push(child);
            }
            }
            res.push_back(temp);
        }

    }
    vector<vector<int>> levelOrder(Node* root) {
        bfs(root);
        return res;
        
    }
};