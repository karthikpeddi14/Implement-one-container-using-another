/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
    q1.push(x);
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    q1.swap(q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q2.empty()) return -1;
    int ans = q2.front();
    q2.pop();
    return ans;
}
