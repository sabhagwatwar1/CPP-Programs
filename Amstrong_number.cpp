#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+pow(rem,3);
        n/=10;
    }
    if(temp==sum)
    {
        cout<<"Amstrong";
    }
    else
    {
        cout<<"Not Amstrong";
    }
}