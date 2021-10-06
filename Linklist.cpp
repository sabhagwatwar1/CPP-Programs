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
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=n;
}
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void DeleteAtHead(node* &head)
{
    node* todel=head;
    head=head->next;
    delete todel;
}
void Deletion(node* &head,int val)
{
    if(head==NULL)
    {
        DeleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    display(head);
    cout<<endl;
    Deletion(head,3);
    display(head);
    cout<<endl;
    DeleteAtHead(head);
    display(head);
    cout<<endl;
}