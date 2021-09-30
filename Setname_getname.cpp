#include<bits/stdc++.h>
using namespace std;
class Student
{
    string name;
    public:
    int age;
    bool gender;

    void Setname(string s)
    {
        name=s;
    }
    void Getname()
    {
        cout<<name<<endl;
    }
    void Display()
    {
        cout<<age<<name<<gender;
    }
};
int main()
{
    Student s;
    s.age=16;
    s.gender=1;
    string n="Ram";
    s.Setname(n);
    s.Getname();
    s.Display();
}