/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        // code here
        stack<Node *> st;
        st.push(root);
        while(!st.empty()){
            Node* top = st.top();
            st.pop();
            if(top->right!=NULL){
                st.push(top->right);
            }
            if(top->left!=NULL){
                st.push(top->left);
            }
            ans.push_back(top->data);
        }
        
        return ans;
        
    }
};