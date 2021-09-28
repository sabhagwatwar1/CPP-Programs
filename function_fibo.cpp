#include<bits/stdc++.h>
using namespace std;
void Fibo(int n)
{
    int a=0;
    int b=1;
    
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
        
    }
}
int main()
{
    int n;
    cin>>n;
    Fibo(n);
}