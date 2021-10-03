#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};

node* CreateNode(int data)
{
    node* newnode=new node();
    if(!newnode)
    {
        cout<<"Memory Error";
        return NULL;
    }
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

node* InsertNode(node* root ,int data)
{
    if(root==NULL)
    {
        root=CreateNode(data);
        
        return root;
    }
    
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left=CreateNode(data);
            return root;
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right=CreateNode(data);
            return root;
        }
    }
}
void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{
    node* root=CreateNode(10);
    root->left=CreateNode(12);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key = 12;
    root = InsertNode(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
 
    return 0;
}