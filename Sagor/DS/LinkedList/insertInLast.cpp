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

void InsertLast(int x)
{
    Node *container = new Node();
    container->vale = x;
    container->next = NULL;

    if (head == NULL)
    {
        head = container;
    }
    else
    {
        Node *temp;
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = container;
    }

    // connnecting previous node with new node;
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
        InsertLast(x);
        Display();
    }
}