void solve(Node *root, int &i){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        i++;
    }
    solve(root->left, i);
    solve(root->right, i);
}  
int countLeaves(Node* root)
{
  // Your code here
  int i = 0;
  if (root==NULL){
      return i;
  }
  solve(root, i);
  return i;
  
}
