#include <iostream>
using namespace std;

#define Max 100

class Queue
{
private:
    int arr[Max], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool IsEmpty();
    bool IsFull();
    void Enqueue(int x);
    void Dequeue();
    void Peek();
};

bool Queue::IsEmpty()
{
    if (front == -1)
    {
        return true;
    }
    return false;
}

bool Queue::IsFull()
{
    if (front == 0 && rear == Max - 1)
    {
        return true;
    }
    return false;
}
void Queue::Enqueue(int x)
{

    if (IsFull())
    {
        cout << "\n\nQueue is Full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = x;
        cout << "\n\n <<==Enqueued " << x << endl;
    }
}
// dequeue
void Queue::Dequeue()
{

    if (IsEmpty())
    {
        cout << "\n\n Queue is empty" << endl;
    }
    else
    {

        int x = arr[front];
        if (rear <= front)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }

        cout << "\n\n==>> Dequeued " << x << endl;
    }
}
// peek
void Queue::Peek()
{
    if (IsEmpty())
    {
        cout << "\n\n Queue is empty" << endl;
    }
    else
    {
        cout << "\n\n ^^ Peek is " << arr[front] << endl;
    }
}

int main()
{
    Queue q;
    q.Peek();
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Peek();

    q.Dequeue();
    q.Dequeue();
    q.Peek();
}