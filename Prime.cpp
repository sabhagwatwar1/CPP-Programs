#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int di=2;
    int flag=0;
    while (di<n)
    {
        if(n%di==0)
        {
            flag=1;
            break;
        }
        else
        {
            di=di+1;
        }
    }
    if(flag)
    {
        cout<<"Not Prime";
    }
    else
    {
        cout<<"prime";
    }
    
}