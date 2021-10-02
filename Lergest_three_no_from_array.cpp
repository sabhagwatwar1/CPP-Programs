#include<bits/stdc++.h>
using namespace std;
void LergestThree(int arr[],int n)
{
    int i,first,second,third;
    first=second=third=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }
    }
    cout<<endl;
    cout<<first<<" "<<second<<" "<<" "<<third<<endl;
}
int main()
{
    int arr[]={2,9,3,8,5,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    LergestThree(arr,n);
}