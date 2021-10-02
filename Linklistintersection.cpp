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
    
    
}

int length(node* &head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
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
    while(d)
    {
        p1=p1->next;
        if(p1!=NULL)
        {
            return -1;
        }
        d--;
    }
    while(p1!=NULL && p2!=NULL)
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
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head1,7);
    insertAtTail(head2,8);
    insertAtTail(head2,9);
    intersect(head1,head2,3);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<intersection(head1,head2)<<endl;
}