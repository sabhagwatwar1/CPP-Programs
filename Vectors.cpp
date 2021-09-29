#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(3,50);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=1;i<=v.size();i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();

    vector<int> v2(3,30);
    for(auto ele: v2)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    swap(v,v2);
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    for(auto ele:v2)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    // vector<int> v2 (3,50);

    // for(auto ele:v2)
    // {
    //     cout<<ele<<" ";
    // }
}