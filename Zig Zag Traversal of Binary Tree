class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool it = true;
        while(!q.empty()){
            int n = q.size();
            vector<int> v(n);
            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = it ? i : n-i-1;
                v[index] = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            it = !it;
            ans.push_back(v);
        }
        return ans;
    }
};
