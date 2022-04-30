void solve(Node *node, vector<int> &v){
    if(node==NULL){
        return ;
    }
    if(node->left==NULL && node->right!=NULL){
        v.push_back(node->right->data);
    }
    if(node->left!=NULL && node->right==NULL){
        v.push_back(node->left->data);
    }
    solve(node->left, v);
    solve(node->right, v);
}   
vector<int> noSibling(Node* node)
{
    // code here
    vector<int> v;
    solve(node, v);
    if(v.empty()){
        return {-1};
    }
    sort(v.begin(), v.end());
    return v;
}
