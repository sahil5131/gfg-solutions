void solve(Node *root, vector<int> &v){
    if(root==NULL){
        return ;
    }
    v.push_back(root->data);
    solve(root->left, v);
    solve(root->right, v);
}

vector <int> preorder(Node* root){
  // Your code here
    vector<int> v;
    if(root==NULL){
        return v;
    }
    solve(root, v);
    return v;
}
