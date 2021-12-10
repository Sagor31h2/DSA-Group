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
        cout << "Stack underflow.";
        exit(1);
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

int main()
{
    int poppedElement;
    push(1);
    push(2);
    push(3);
    push(4);
    poppedElement = pop();
    cout << "Popped element is: " << poppedElement << endl;
    cout << "The stack is: ";
    print();

    return 0;
}
