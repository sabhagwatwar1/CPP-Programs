#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}