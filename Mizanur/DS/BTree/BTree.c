#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        printf("cannot allocat memory!");
        exit(1);
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void create_left_child(Node *node, Node *l_child)
{
    node->left = l_child;
}

void create_right_child(Node *node, Node *r_child)
{
    node->right = r_child;
}

Node *create_tree()
{
    Node *root = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);

    create_left_child(root, seven);
    create_right_child(root, nine);

    //second_left level
    Node *one = create_node(1);
    Node *six = create_node(6);
    create_left_child(seven, one);
    create_right_child(seven, six);

    //third_left level
    Node *five = create_node(5);
    Node *ten = create_node(10);
    create_left_child(six, five);
    create_right_child(six, ten);



    //third_right level
    Node* eight = create_node(8);
    create_right_child(nine, eight);


    //third_right level

    Node* three = create_node(3);
    Node* four = create_node(4);
    create_left_child(eight, three);
    create_right_child(eight, four);


    return root;
}

void pre_order_traverse(Node *root)
{
    printf("%d\t", root->data);

    if (root->left != NULL)
    {
        pre_order_traverse(root->left);
    }

    if (root->right != NULL)
    {
        pre_order_traverse(root->right);
    }
}


void post_order_traverse(Node *root)
{

    if (root->left != NULL)
    {
        post_order_traverse(root->left);
    }

    if (root->right != NULL)
    {
        post_order_traverse(root->right);
    }
    printf("%d\t", root->data);
}

void in_order_traverse(Node *root)
{

    if (root->left != NULL)
    {
        in_order_traverse(root->left);
    }

    printf("%d\t", root->data);
    if (root->right != NULL)
    {
        in_order_traverse(root->right);
    }
}

int main(void)
{
    Node *root = create_tree();

    in_order_traverse(root);

    return 0;
}