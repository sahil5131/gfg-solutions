class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prev = 0;
        Node *current = head;
        Node *temp = NULL;
        while(current!=NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            
        }
        head = prev;
        return head;
    }    
};
