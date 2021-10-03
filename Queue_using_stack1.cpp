#include<bits/stdc++.h>
using namespace std;
class Que
{
    stack<int>st;

    public:
    void push(int x)
    {
        st.push(x);
    }
    int pop()
    {
       if(st.empty())
       {
           cout<<"Queue is empty";
           return -1;
       }
       int x=st.top();
       st.pop();
       if(st.empty())
       {
           return x;
       }
       int topval=pop();
       st.push(x);
       return topval;
    }
};
int main()
{
    Que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}