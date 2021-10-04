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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}
bool isBalance(node* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isBalance(root->left)==false)
    {
        return false;
    }
    if(isBalance(root->right)==false)
    {
        return false;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1)
    {
        return  true;
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
    if(isBalance(root2))
    {
        cout<<"Balance tree";
    }
    else
    {
        cout<<"Unbalance tree";
    }
}