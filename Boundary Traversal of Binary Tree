class Solution {
public:
    void addLeaves(Node* root, vector<int>& ans) {
        if (root == NULL) return;
        
        if (!root->left && !root->right) {
            ans.push_back(root->data);
            return;
        }
        
        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }
    
    vector<int> boundary(Node *root) {
        vector<int> ans;
        if (!root) return ans;
        if (root->left || root->right) {
            ans.push_back(root->data);
        }
        Node* temp = root->left;
        while (temp) {
            if (temp->left || temp->right) {
                ans.push_back(temp->data);
            }
            if (temp->left) temp = temp->left;
            else temp = temp->right;
        }
        addLeaves(root, ans);
        stack<int> st;
        temp = root->right;
        while (temp) {
            if (temp->left || temp->right) {
                st.push(temp->data);
            }
            if (temp->right) temp = temp->right;
            else temp = temp->left;
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};
