#include<bits/stdc++.h>
using namespace std;
void Reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        if(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s="Hey how are you";
    cout<<s<<endl;
    Reverse(s);
}