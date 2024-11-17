class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return 1;

        int left_data = (root->left != NULL) ? root->left->data : 0;
        int right_data = (root->right != NULL) ? root->right->data : 0;
        return (root->data == left_data + right_data) && isSumProperty(root->left) && isSumProperty(root->right);
    }
};
