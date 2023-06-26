/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
    if(front ==NULL || rear==NULL)
    {
        QueueNode* temp = new QueueNode(x);
        rear = temp;
        front = temp;
    }
    else{
    QueueNode* temp  = new QueueNode(x);
    rear->next = temp;
    rear = temp;
    }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL) 
    {
        rear = NULL;
        return -1;
        
    }
       int ans = front->data;
       front = front->next;
       return ans;
}
