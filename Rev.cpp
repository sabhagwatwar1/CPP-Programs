#include<bits/stdc++.h>
using namespace std;
string Rev(string s)
{
   return reverse(s.begin(),s.end());
}
int main()
{
    string s="Rem";
    cout<<Rev(s);
}