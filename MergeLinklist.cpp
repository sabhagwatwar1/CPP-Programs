#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void InsertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        return InsertAtHead(head,val);
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int length(node* head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;

}
node* MergeLink(node* &head1,node* &head2)
{
    node* pt1=head1;
    node* pt2=head2;
    node* dummynode=new node(-1);
    node*pt3=dummynode;

    while(pt1!=NULL && pt2!=NULL)
    {
        if(pt1->data<pt2->data)
        {
            pt3->next=pt1;
            pt1=pt1->next;
        }
        else
        {
            pt3->next=pt2;
            pt2=pt2->next;
        }
        pt3=pt3->next;
    }
    while(pt1!=NULL)
    {
        pt3->next=pt1;
        pt1=pt1->next;
        pt3=pt3->next;
    }
    
    while(pt2!=NULL)
    {
        pt3->next=pt2;
        pt2=pt2->next;
        pt3=pt3->next;
    }
    return dummynode->next;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head2,2);
    insertAtTail(head1,3);
    insertAtTail(head2,4);
    insertAtTail(head1,5);
    insertAtTail(head2,6);
    insertAtTail(head1,7);
    insertAtTail(head1,8);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    node* newnode=MergeLink(head1,head2);
    display(newnode);
}