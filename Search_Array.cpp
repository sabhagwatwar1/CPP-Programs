#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }
    }
    int key;
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Found at"<<i<<""<<j<<endl;
                flag=1;
                break;
                
                
            }
        }
    }
    if(flag==0)
    {
        cout<<"Not found";
    }
}