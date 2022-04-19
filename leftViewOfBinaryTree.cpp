vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   if(root==NULL){
       return v;
   }
   queue<Node *> q;
   q.push(root);
   while(!q.empty()){
       int size = q.size();
       v.push_back(q.front()->data);
        for(int i = 0; i<size; i++){
            if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }
   }
   return v;
}
