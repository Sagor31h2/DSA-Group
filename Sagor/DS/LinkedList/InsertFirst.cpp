#include <iostream>
using namespace std;

class Node
{
public:
    int vale;
    Node *next;
};

// Head
Node *head;

void Insert(int x)
{
    Node *container = new Node();
    container->vale = x;
    container->next = NULL;
    // connnecting previous node with new node;
    if (head != NULL)
    {
        container->next = head;
    }

    head = container;
}

void Display()
{
    cout << "List is  ";
    Node *storeTemp = head;
    while (storeTemp != NULL)
    {
        cout << storeTemp->vale << " ";

        storeTemp = storeTemp->next;
    }
    cout << endl;
}

int main()
{

    cout << "Enter size of the list" << endl;
    int n, i, x;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "enter number" << endl;
        cin >> x;
        Insert(x);
        Display();
    }
}