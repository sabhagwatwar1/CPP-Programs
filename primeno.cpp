#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for( i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime";
            break;
        }
        
    }
    if(i==n)
        {
            cout<<"Prime";
        }
}