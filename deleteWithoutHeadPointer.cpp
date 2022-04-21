class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       if(del==NULL){
           return;
       }
       *del = *del->next;
    }

};
