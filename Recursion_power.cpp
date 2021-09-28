#include<bits/stdc++.h>
using namespace std;
int Power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return p*Power(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<Power(n,p);
}