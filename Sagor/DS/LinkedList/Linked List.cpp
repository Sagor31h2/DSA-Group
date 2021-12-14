#include <iostream>
using namespace std;
class Space
{
public:
    int vale;
    Space *nextNodeAddress;
};

int main()
{
    // make Space type head pointer
    Space *head;
    // if there is no next node then next Space is null
    Space *one = NULL;
    Space *two = NULL;
    Space *three = NULL;

    // when we putting Spaces they get memory allocation
    one = new Space();
    two = new Space();
    three = new Space();

    // connecting the value
    one->nextNodeAddress = two;
    two->nextNodeAddress = three;
    three->nextNodeAddress = NULL;

    // putting Value
    one->vale = 1;
    two->vale = 2;
    three->vale = 3;

    // connect node to head;

    head = one;

    // printing
    while (head != NULL)
    {
        cout << "Add-- " << head
             << "   Value= " << head->vale
             << "    Nxt Add--" << head->nextNodeAddress
             << endl;

        head = head->nextNodeAddress;
    }

    return 0;
}