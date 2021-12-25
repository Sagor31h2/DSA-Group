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
void Delete(int pos)
{
    Node *temp;
    Node *prevs;
    temp = head;
    if (pos == 0)
    {
        prevs = head;
        head = temp->next;
        delete (prevs);
    }
    else
    {
        while (pos != 1)
        {
            temp = temp->next;
            pos--;
        }
        prevs = temp->next;
        temp->next = prevs->next;
        delete (prevs);
    }
}
int main()
{
    Insert(1);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);

    Display();
    cout << "after delete" << endl;
    Delete(2);
    Display();

    return 0;
}