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

Node* inorder_successer(Node *root)
{
    Node *temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* delete_node(Node *root , int data)
{
    if(root == NULL)
    {
        return root;
    }

    if ( data < root->key)
    {
        root->left = delete_node(root->left , data);
    }
    else if( data > root->key )
    {
        root->right = delete_node(root->right , data);
    }

    else
    {
        if(root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *temp = inorder_successer(root->right);
        root->key = temp->key;
        root->right = delete_node(root->right , temp->key);
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
    cout <<  "Inorder Transversal befor deletion ";
    in_order(root);

    Node *temp1 = NULL;
    delete_node(root, 13);
    cout << "\n" << "Inorder Transversal After deletion ";
    in_order(root);
}