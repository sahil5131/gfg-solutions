class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v1;
       vector<int> v2;
       queue<Node *> q;
       q.push(root);
       while(!q.empty()){
           int size=q.size();
           for(int i = 0; i<size; i++){
                v1.push_back(q.front()->data);
                if(q.front()->right!=NULL){
                q.push(q.front()->right);
                }
                if(q.front()->left!=NULL){
                q.push(q.front()->left);
                }
                q.pop();
           }
           v2.push_back(v1[0]);
           v1.clear();
       }
       return v2;
    }
};
