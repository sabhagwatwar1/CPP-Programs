#include<bits/stdc++.h>
using namespace std;
void Reverse(string s)
{
    stack<string> st;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' and s[i]<='Z')
        {
             word+=s[i];
        }
        st.push(word);
        
    }
    while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
   
}
int main()
{
    string s="Rama";
    cout<<s<<endl;
    Reverse(s);
}