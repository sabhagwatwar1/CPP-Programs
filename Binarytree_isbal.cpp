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

bool isBalance(node* root,int * height)
{
    if(root==NULL)
    {
        return true;
    }
    int lh=0;
    int rh=0;

    if(isBalance(root->left,&lh)==false)
    {
        return false;
    }
    if(isBalance(root->right,&rh)==false)
    {
        return false;
    }

    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);

    struct node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);
    int height=0;
    if(isBalance(root2,&height))
    {
        cout<<"Balance tree";
    }
    else
    {
        cout<<"Unbalance tree";
    }
}