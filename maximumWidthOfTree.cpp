class Solution {
  public:
  int solve(Node* node, int mx){
    if(node==NULL){
        return 0;
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
        int z=v1.size();
        mx=max(mx, z);
        v1.clear();
    }
    return mx;
}
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        int mx = solve(root, 0);
        return mx;
    }
};
