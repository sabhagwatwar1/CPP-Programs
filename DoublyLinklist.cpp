#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    
    head=n;
}
void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        return insertAtHead(head,val);
    }
    node*n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
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
    head->prev=NULL;
    delete todel;
}
void Deletion(node* &head,int pos)
{
    node* temp=head;
    if(pos==1)
    {
        return DeleteAtHead(head);
    }

    int count=1;
    while(temp!=NULL && count!=pos )
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp;
    

}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    cout<<endl;
    insertAtHead(head,7);
    display(head);
    Deletion(head,3);
    display(head);
}