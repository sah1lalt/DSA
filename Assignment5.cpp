 /*ASSIGNMENT NO - 5
 NAME - SAHIL DILIP BOMBLE
 ROLL NO - SYCOA26
 */
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    bool rightThread;
};

Node *Newnode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node *leftMost(struct Node *n)
{
    if (n == NULL)
        return NULL;

    while (n->left != NULL)
        n = n->left;

    return n;
}

void inOrder(struct Node *root)
{
    struct Node *cur = leftMost(root);
    while (cur != NULL)
    {
        cout << cur->data;

        if (cur->rightThread)
            cur = cur->right;
        // else
            // cur = leftmost(cur->right);
    }
}

void Inorder(struct Node *node)
{
    if (node == NULL)
        return;

    Inorder(node->left);
    cout << node->data << " ";
    Inorder(node->right);
}

void Preorder(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    Preorder(node->left);
    Preorder(node->right);
}

void Postorder(struct Node *node)
{
    if (node == NULL)
        return;

    Postorder(node->left);
    Postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    struct Node *root = Newnode(1);
    root->left = Newnode(2);
    root->right = Newnode(3);
    root->left->left = Newnode(4);
    root->left->right = Newnode(5);

    cout << "Inorder : ";
    Inorder(root);
    cout << "\nPreorder : ";
    Preorder(root);
    cout << "\nPostorder : ";
    Postorder(root);

    return 0;
}
