#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
    int **ap=&p;
    cout<<**ap<<endl;
    cout<<*ap<<endl;
    int ***app=&ap;
    cout<<***app<<endl;
    
}