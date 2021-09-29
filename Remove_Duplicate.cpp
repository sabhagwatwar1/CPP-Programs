#include<bits/stdc++.h>
using namespace std;
string Remove(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char a=s[0];
    string ans=Remove(s.substr(1));
    if(a==ans[0])
    {
        return ans;
    }
    return (a+ans);
}
int main()
{
    cout<<Remove("aaaabbbbbccccdddeee");
}