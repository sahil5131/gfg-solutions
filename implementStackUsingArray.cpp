//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code     
    if(top==-1)return top;
    int x=arr[top];
    top--;
    return x;
}
