#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        left=NULL;
        right=NULL;
    }
};
int CalHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return max(CalHeight(root->left),CalHeight(root->right))+1;
}
int CalDiameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int Lheight=CalHeight(root->left);
    int Rheight=CalHeight(root->right);

    int curreDiameter=Lheight+Rheight;

    int lDiameter=CalDiameter(root->left);
    int RDiameter=CalDiameter(root->right);
    return max(curreDiameter,max(lDiameter,RDiameter));

}
int main()
{
    
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->right=new node(9);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<CalDiameter(root);
}