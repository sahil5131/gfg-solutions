vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        vector<int>v;
        int n = q.size();
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
        int x = v.size();
        for(int i = 0; i<x; i++){
            ans.insert(ans.begin(), v.back());
            v.pop_back();
        }
    }
    return ans;
}
