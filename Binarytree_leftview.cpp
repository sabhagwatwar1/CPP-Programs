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
void LeftView(node* root)
{
    if(root==NULL)
    {
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            node* temp=q.front();
            q.pop();

            if(i==0)
            {
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->left->left=new node(5);
    LeftView(root);
}