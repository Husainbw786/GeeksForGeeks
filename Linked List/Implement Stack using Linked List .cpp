//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top == 0)
    {
        return -1;
    }
    StackNode *temp = top;
    top = top->next;
    temp->next = 0;
    return(temp->data);
}
