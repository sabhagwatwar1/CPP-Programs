#include<bits/stdc++.h>
using namespace std;
bool isBal(string s)
{
    int n=s.size();
    stack<char> st;
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        
        
    }

}
int main()
{
    string s="[{}";
    if(isBal(s))
    {
        cout<<"Balance";
    }
    else
    {
        cout<<"Not balance";
    }
}