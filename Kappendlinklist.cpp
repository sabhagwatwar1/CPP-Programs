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
    node*n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        return insertAtHead(head,val);
    }
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
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
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
node* kappend(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while (tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        if(count==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;

}
int main()
{
    node*head=NULL;
    int arr[]={1,2,3,5,6,7};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<endl;
    node* ne=kappend(head,3);
    display(ne);

}