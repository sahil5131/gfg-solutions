void solve(Node* node, vector<vector<int>> &v){
    if(node==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        vector<int> v1;
        int n = q.size();
        for(int i=0; i<n; i++){
            if(q.front()->left!=NULL){
            q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
            q.push(q.front()->right);
            }
            v1.push_back(q.front()->data);
            q.pop();
        }
        v.push_back(v1);
        v1.clear();
    }
    
}
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> v;
  solve(node, v);
  return v;
}
