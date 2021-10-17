#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void LOT(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* node=q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->data;
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
        }
    }
    
}
void Preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);

}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->left=new node(4);
    root->left->right=new node(5);
    Preorder(root);
    cout<<endl;
    LOT(root);
    cout<<endl;
    Preorder(root);
}