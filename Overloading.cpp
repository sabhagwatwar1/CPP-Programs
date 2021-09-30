#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
   virtual void print()
    {
        cout<<"this is print from Base class";
    }
    void display()
    {
        cout<<"this is display from Base class";
    }
};
class Derived:public Base
{
    public:
    void print()
    {
        cout<<"this is print from Derived class";
    }
    void display()
    {
        cout<<"this is display from Derived class";
    }
};
int main()
{
    Base *baseptr;
    Derived d;
    baseptr=&d;

    baseptr->print();
    baseptr->display();

}