#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Head
Node *head;

void Insert(int pos, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        exit;
    }
    else
    {

        Node *tempHead = head;
        while (pos != 1)

        {
            tempHead = tempHead->next;
            pos--;
        }

        temp->next = tempHead->next;
        tempHead->next = temp;
    }
}

void Display()
{
    cout << "List is  ";
    Node *storeTemp = head;
    while (storeTemp != NULL)
    {
        cout << storeTemp->data << " ";

        storeTemp = storeTemp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;

    Insert(1, 1);
    Insert(1, 2);
    Display();

    return 0;
}