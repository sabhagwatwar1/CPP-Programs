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
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val)
{
    
    node* n=new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    
}
void display(node* &head)
{
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp->next!=head);
    cout<<"NULL";
}
void DeleteAtHead(node* &head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    } 
    node* todel=head;
    temp->next=head->next;
    head=head->next;
    delete todel;
}
void Deletion(node* &head,int pos)
{
    if(pos==1)
    {
        DeleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
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
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    cout<<endl;
    insertAtHead(head,7);
    display(head);
    cout<<endl;
    Deletion(head,3);
    display(head);
    cout<<endl;
    DeleteAtHead(head);
    display(head);
    cout<<endl;
}