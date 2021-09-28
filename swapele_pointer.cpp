#include<bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before swap"<<a<<" "<<b<<endl;
    Swap(&a,&b);
    cout<<"After swap"<<a<<" "<<b;
}