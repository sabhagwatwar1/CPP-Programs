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
        cout<<name<<" "<< age<<" "<<gender<<endl;
    }
};
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
        cin>>s[i].name;
        cin>>s[i].age;
        cin>>s[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        s[i].Display();
    }
}