#include <iostream>
using namespace std;
#define MAX 4

int stackArr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "Stack overflow.";
        return;
    }
    top++;
    stackArr[top] = data;
}

int pop()
{
    int val;
    if (top == -1)
    {
        cout << "Stack underflow." << endl;
        return 0;
    }
    val = stackArr[top];
    top--;
    return val;
}

void print()
{
    if (top == -1)
    {
        cout << "Stack is empty." << endl;
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int peek()
{
    if (top <= -1)
    {
        cout << "The stack is empty.";
        return 0;
    }
    return stackArr[top];
}

int main()
{
    int poppedElement;
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    pop();
    pop();
    pop();

    peek();
    // pop();
    // pop();
    // poppedElement = pop();
    // cout << "Popped element is: " << poppedElement << endl;
    // cout << "The stack is: ";
    // print();

    return 0;
}
