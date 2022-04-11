class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> v;
    vector<int> inOrder(Node* root) {
        // Your code here
        if (!root)
        return v;

    inOrder(root->left);
    v.push_back(root->data);
    inOrder(root->right);
    return v;
    }
};
