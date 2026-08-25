/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        vector<int> left = postOrder(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        vector<int> right = postOrder(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        ans.push_back(root->data);
        return ans;
    }
};