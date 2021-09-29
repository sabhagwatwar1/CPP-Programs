#include<bits/stdc++.h>
using namespace std;
int dec(int n )
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    return dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<dec(n);
}