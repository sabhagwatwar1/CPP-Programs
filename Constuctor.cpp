#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void print()
    {
        cout<<"Base";
    }

};
class B: public A
{
    public:
    void print()
    {
        cout<<"Derived";
    }
};
int main()
{
    A *a;
    B=&a;
    a.print();

}