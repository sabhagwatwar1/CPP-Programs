#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int mini=INT_MAX;
    int maxa=INT_MIN;
    for(int i=0;i<n;i++)
    {
        
        maxa=max(maxa,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<maxa<<" "<<mini;

}