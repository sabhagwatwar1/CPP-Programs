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
int Sear(int in[],int start,int end,int curr)
{
    
    for(int i=start;i<=end;i++)
    {
        if(in[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
node* buldTree(int preorder[],int in[],int start,int end)
{
    if( start>end)
    {
        return NULL;
    }
    static int idx=0;
    int curr=preorder[idx];
    idx++;
    node* Node=new node(curr);
    if(start==end)
    {
        return Node;
    }
    int pos=Sear(in,start,end,curr);
    Node->left=buldTree(preorder,in,start,pos-1);
    Node->right=buldTree(preorder,in,pos+1,end);

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
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node* root=buldTree(preorder,inorder,0,4);
    Inorder(root);
}