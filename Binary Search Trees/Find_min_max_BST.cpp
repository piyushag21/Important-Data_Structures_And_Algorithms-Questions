#include<iostream>
using namespace std;

class Node
{
    public:
    int key;
    Node *left , *right;
};

Node *create_node(int data)
{
    Node *temp = new Node();
    temp->key = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node *insert(Node *root , int data)
{
    if(root == NULL)
    {
        return create_node(data);
    }

    if(data < root->key)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}

int minValue(Node* root)
{
    if(root->right == NULL)
    {
        return root->key;
    }
    Node *temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->key;
}

int maxValue(Node* root)
{
    if(root->left == NULL)
    {
        return root->key;
    }
    Node *temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->key;
}


int main()
{
    Node *root = NULL;
    root = create_node(20);
    int arr[] = {10,30,6,13,3,7,12,15,21,31};
    for(int i = 0; i < 10; i++)
    {
        insert( root , arr[i] );
    }

    cout << "Maximum Value is " << maxValue(root) << "\n";
    cout << "Minimum Value is " << minValue(root) << "\n";
}