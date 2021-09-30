#include<bits/stdc++.h>
using namespace std;
class Student
{
    
    string name;
    int age;
    bool gender;
    public:
    Student(string n,int a,bool g)
    {
        name=n;
        age=a;
        gender=g;
    }
    Student(Student &s)
    {
        name=s.name;
        age=s.age;
        gender=s.gender;
    }
    bool operator== (Student &s)
    {
        if(name=s.name && age=s.age && s.gender=s.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~Student()
    {
        cout<<"called destructor";
    }
    void display()
    {
        cout<<name<<age<<gender;
    }
};
int main()
{
    Student s("Ram",19,0);
    Student s1("om",98,0);
    Student a=s;
    if(a==s)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Different";
    }
    s.display();
    s1.display();
}