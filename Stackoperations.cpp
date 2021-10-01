#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
    int *arr;
    int top;
    public:
    Stack()
    {
        arr[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow";
        }
        top++;
        arr[top]=x;

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to pop";
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack st[3];
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    cout<<st->Top()<<endl;
    st->pop();
    cout<<st->Top()<<endl;
    st->pop();
    st->pop();
    cout<<st->empty()<<endl;
    cout<<st->Top()<<endl;
    st->pop();
    cout<<st->empty()<<endl;
    cout<<st->Top()<<endl;
}