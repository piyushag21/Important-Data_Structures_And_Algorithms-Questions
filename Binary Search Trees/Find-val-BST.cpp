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

Node* search_node(Node *root , int value)
{
    if(root == NULL)
    {
        cout << "Value Not Found";
    }
    else if(root->key == value)
    {
        cout << "Value Found" << "\n";
    }
    else
    {
        if(value < root->key)
        {
            root->left = search_node(root->left, value);
        }
        else
        {
            root->right = search_node(root->right, value);
        }
    }
    return root;
}

void in_order(Node *root)
{
    if(root != NULL)
    {
        in_order(root->left);
        cout << root->key << " ";
        in_order(root->right);
    }
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
    int value;
    cout << "Enter Value You Want To Search ";
    cin >> value;
    search_node(root, value);
}