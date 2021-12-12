#include <iostream>
using namespace std;
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
        cout << "Underflow";
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty.";
    }
    else
    {
        cout << "Rear of the queue is: " << queue[front];
    }
}

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    dequeue();
    peek();
}