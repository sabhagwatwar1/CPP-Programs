#include<iostream>
using namespace std;
int main()
{
    string s="Hello";
    string res="";
    for(int i=s.length()-1;i>=0;i--)
    {
        res+=s[i];
    }
    cout<<res<<endl;
}