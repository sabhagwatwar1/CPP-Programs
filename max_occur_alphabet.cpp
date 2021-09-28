#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="jkhdjkhjkkjs";
    int max_count=INT_MIN;
    for(int i=0;i<str.size();i++)
    {
        int count=0;
        for(int j=i+1;j<str.size();j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        max_count=max(max_count,count);
    }
    cout<<max_count<<endl;
}