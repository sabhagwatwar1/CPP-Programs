#include<bits/stdc++.h>
using namespace std;
void Subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    char code=ch;
    string ros=s.substr(1);

    Subseq(ros,ans);
    Subseq(ros,ans+ch);
    Subseq(ros,ans+to_string(code));
}
int main()
{
    Subseq("AB","");
    cout<<endl;
}