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
void EvenAfterOdd(node*head)
{
    node* even=head;
    node* odd=head;
    node* evenStart=even;
    while (even->next!=NULL and odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    even->next=evenStart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }

}
int main()
{
    node* head=NULL;
    int arr[]={1,9,2,8,4,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
}