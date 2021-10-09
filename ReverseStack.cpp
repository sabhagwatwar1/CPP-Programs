#include<bits/stdc++.h>
using namespace std;
void Rev(stack<int> &s1,stack<int> &s2)
{
    while(!s1.empty())
    {
        int ele=s1.top();
        s2.push(ele);
        s1.pop();
    }
    while (!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
    
}
int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    Rev(s1,s2);
}