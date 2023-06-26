//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode* temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL) return -1;
    int ans = top->data;
    top = top->next;
    return ans;
}
