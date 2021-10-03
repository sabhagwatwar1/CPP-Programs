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
void Deletion(node* &head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
     DeleteAtHead(head);
     return;
    }
    node* temp=head;
    while(temp->next->data!=pos)
    {
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
}
int lenght(node * head)
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
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int intersection(node* &head1,node* &head2)
{
    int l1=lenght(head1);
    int l2=lenght(head2);

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
node* Merge(node* &head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
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
    insertAtTail(head2,6); 
    insertAtTail(head2,7); 
    insertAtTail(head2,8);
    cout<<endl; 
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    // cout<<endl;
    // Deletion(head,3);
    // display(head);  
    // cout<<endl;
    // DeleteAtHead(head);
    // display(head); 
    intersect(head1,head2,3);
    cout<<intersection(head1,head2);
    cout<<endl;
    node* newnode=Merge(head1,head2);
    display(newnode);
}