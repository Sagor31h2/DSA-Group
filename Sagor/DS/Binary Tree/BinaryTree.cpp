#include <bits/stdc++.h>
using namespace std;

// class
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *CreateNode(int data)
{

    Node *Create = new Node();

    Create->data = data;
    Create->left = NULL;
    Create->right = NULL;

    return Create;
}
// left child
void createLeft(Node *node, Node *lChild)
{
    node->left = lChild;
}
// right child
void createRight(Node *node, Node *rChild)
{
    node->right = rChild;
}

Node *CreateTree()
{
    Node *root = CreateNode(2);
    Node *seven = CreateNode(7);
    Node *nine = CreateNode(9);

    createLeft(root, seven);
    createRight(root, nine);

    // second_left level
    Node *one = CreateNode(1);
    Node *six = CreateNode(6);
    createLeft(seven, one);
    createRight(seven, six);

    // third_left level
    Node *five = CreateNode(5);
    Node *ten = CreateNode(10);
    createLeft(six, five);
    createRight(six, ten);

    // third_right level
    Node *eight = CreateNode(8);
    createRight(nine, eight);

    // third_right level

    Node *three = CreateNode(3);
    Node *four = CreateNode(4);
    createLeft(eight, three);
    createRight(eight, four);

    return root;
}

// preorder
void PreOrderTraverse(Node *node)
{
    cout << node->data << "\t";

    if (node->left != NULL)
    {
        PreOrderTraverse(node->left);
    }

    if (node->right != NULL)
    {
        PreOrderTraverse(node->right);
    }
}

int main()
{
    Node *Root = CreateTree();

    PreOrderTraverse(Root);
    return 0;
}