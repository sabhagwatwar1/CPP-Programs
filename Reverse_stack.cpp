#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int ele)
{
    if(st.empty())
    {
        return st.push(ele);
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st.ele);

    st.push(topele);
}
Void Revrse(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    Revrse(st);
    insertAtBottom(st,ele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    Revrse(st);
}