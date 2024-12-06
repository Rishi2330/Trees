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
    vector<int> ans;
    void inOrder(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return ;
        }
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans); 
    }
    bool isDup(vector<int>& arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=arr[i-1]){
                return false;
            }
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        inOrder(root,ans);
        bool a = isDup(ans);
        return a;
    }
};
