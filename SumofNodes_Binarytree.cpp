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
int SumofNodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return SumofNodes(root->left)+SumofNodes(root->right)+root->data;
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->left->left=new node(5);
    root->left->right->left=new node(6);
    cout<<SumofNodes(root)<<endl;
}