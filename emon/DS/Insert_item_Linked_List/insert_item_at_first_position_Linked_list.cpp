#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

// Head
Node *head;

void Insert(int x)
{

    Node *container = new Node();
    container->value = x;
    // connnecting previous node with new node;
    if (head == NULL)
    {
        head = container;
    }
    else
    {
        container->next = head;
        head = container;
    }
}

void Display()
{
    cout << "List is  ";
    Node *storeTemp = head;
    while (storeTemp != NULL)
    {
        cout << storeTemp->value << " ";

        storeTemp = storeTemp->next;
    }
    cout << endl;
}

int main()
{

    cout << "Enter size of the list" << endl;
    int n, x;
    cin >> n;

    while (n > 0)
    {
        cout << "enter number" << endl;
        cin >> x;
        Insert(x);
        Display();
        n--;
    }
}