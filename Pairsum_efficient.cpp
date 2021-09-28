#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int low,int high,int key)
{
    while(low<high)
    {
        if(arr[low]+arr[high]==key)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>key)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<pairsum(arr,0,n-1,target);
}