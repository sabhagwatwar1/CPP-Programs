#include<bits/stdc++.h>
using namespace std;
int Prec(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=="/" || ch=="*")
    {
        return 2;
    }
    else if(ch=="+" || ch=="-")
    {
        return 1;
    }
    else
    {
        return -1;
    }

}
void InfixToPostfix(string s)
{
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++)
    {
            res+=s[i];
    }
    if(s[i]=="(")
    {
        st.push(s[i]);
    }
    else if(!st.empty() && st.top()==")")
    {
        while(s[i]!="(")
        {
            res+=st.pop();
            st.pop();
        }
        if(!st.empty())
        {
            st.pop();
        }
    }
    else
    {
        if(!)
    }
}

int main()
{

}