class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
    if(node==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        for(int i=0; i<q.size(); i++){
            ans.push_back(q.front()->data);
            if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }
    }
    return ans;
    }
};
