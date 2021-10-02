#include<bits/stdc++.h>
using namespace std;
#define n 20
class Queue
{
    int *arr;
    int front;
    int back;
     
    public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow";
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }
    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element";
            return;
        }
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element";
            return -1;
        } 
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;

    }
};
int main()
{
    Queue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.empty()<<endl;
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.empty();

}