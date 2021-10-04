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
int CalDiameter(node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int LDiameter=CalDiameter(root->left,&lh);
    int RDiameter=CalDiameter(root->right,&rh);

    int currDiameter=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currDiameter,max(lh,rh)+1);
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->left->left=new node(5);
    root->left->right->left=new node(6);
    int height=0;
    cout<<CalDiameter(root,&height);
}