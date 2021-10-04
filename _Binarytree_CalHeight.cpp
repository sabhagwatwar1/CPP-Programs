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
        right=NULL;
        left=NULL;
    }
};
int CalHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int Lheight=CalHeight(root->left);
    int Rheight= CalHeight(root->right);

    return max(Lheight,Rheight)+1;
}
int main()
{
    
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    cout<<CalHeight(root);
}