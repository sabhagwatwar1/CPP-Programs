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
int Sear(int in[],int start ,int end,int val)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i]==val)
        {
            return i;
        }
    }
    return -1;
}

node* BuildTree(int post[],int n,int ino[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int idx=n-1;
    int val=post[idx];
    idx--;
    node* Node=new node(val);
    if(start==end)
    {
        return Node;
    }
    int pos=Sear(ino,start,end,val);
    Node->right=BuildTree(post,n,ino,pos+1,end);
    Node->left=BuildTree(post,n,ino,start,pos-1);

    return Node;
}
void Inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}
int main()
{
    int post[]={4,2,5,3,1};
    int n=sizeof(post)/sizeof(post[0]);
    int ino[]={4,2,1,5,3};
    node* root=BuildTree(post,n,ino,0,4);
    Inorder(root);
}