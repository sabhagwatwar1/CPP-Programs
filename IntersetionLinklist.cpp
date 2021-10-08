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
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
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
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        
        temp1=temp1->next;
        cout<<temp1->data<<endl;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;

    }
    temp2->next=temp1;
}
int length(node* head)
{
    node* temp=head;
    int l=0;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
int intersection(node* &head1,node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* p1;
    node* p2;
    if(l1>l2)
    {
        d=l1-l2;
        p1=head1;
        p2=head2;
    }
    else
    {
        d=l2-l1;
        p1=head2;
        p2=head1;
    }
    while (d)
    {
        p1=p1->next;
        if(p1==NULL)
        {
            return -1;
        }
        d--;
    }
    while (p1!=NULL and p2!=NULL)
    {
        if(p1==p2)
        {
            return p1->data;
        }
        p1=p1->next;
        p2=p2->next;
    }
    
    return -1;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,9);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head2,6);
    insertAtTail(head2,7);
    insertAtTail(head2,8);
    // display(head);
    intersect(head1,head2,3);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<intersection(head1,head2);
}