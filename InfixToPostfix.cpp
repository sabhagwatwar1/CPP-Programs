#include<bits/stdc++.h>
using namespace std;
int Prec(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=="*" || ch=="/")
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
string InfixtoPostfix(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i])
    }

}
int main()
{

}