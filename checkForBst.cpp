class Solution
{
    public:
    bool isTrueBst(Node *root, long max, long min){
        if(root==NULL){
            return true;
        }
        if(root->data>=max || root->data<=min){
            return false;
        }
        return isTrueBst(root->left, root->data, min) && isTrueBst(root->right, max, root->data);
        
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        return isTrueBst(root, LONG_MAX, LONG_MIN);
    }
};
