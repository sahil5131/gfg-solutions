vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    int l=0;
    while(!q.empty()){
        int n=q.size();
        vector <int> v;
        for(int i=0; i<n; i++){
            v.push_back(q.front()->data);
            if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }
        if(l%2==1){
            for(int i=0; i<v.size(); i++){
                ans.push_back(v[i]);
            }
        }else{
            reverse(v.begin(),v.end());
            for(int i=0; i<v.size(); i++){
                ans.push_back(v[i]);
            }
        }
        l++;
    }
    return ans;
}
