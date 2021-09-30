#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    bool gender;
    void Display()
    {
        cout<<name<<age<<gender<<endl;
    }
};
int main()
{
    Student s;
    s.name="Ram";
    s.age=17;
    s.gender=0;
    s.Display();
}