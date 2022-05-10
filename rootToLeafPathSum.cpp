class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
     if(root==NULL)
      return false;
      int subsum=S-root->data;
      if(!root->left && !root->right && subsum==0)
        return true;
        bool a=hasPathSum(root->left,S-root->data);
        bool b=hasPathSum(root->right,S-root->data);
        return a||b;
    
}
};
