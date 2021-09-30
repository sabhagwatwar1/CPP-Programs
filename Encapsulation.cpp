#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int a;
    void func()
    {
        cout<<a<<endl;
    }
    public:
    int b;
    void funcb()
    {
        cout<<b;
    }

    protected:
    int c;
    void funcc()
    {
        cout<<c;
    }
};
class Teacher: Student
{
    int d;
    fund()
    {
        cout<<c;
    }
}
int main()
{
    Student s;
    Teacher t
    s.b=14;
    s.funcb();
    t.c=13;
    t.funcc();
}