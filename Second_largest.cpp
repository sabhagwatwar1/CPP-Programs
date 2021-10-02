#include<bits/stdc++.h>
using namespace std;
void Second_Largest(int arr[],int n)
{
    int i,first,second;
    first=second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            second=arr[i];
        }
    }
    if(second==INT_MIN)
    {
        cout<<"No number exist";
    }
    else
    {
        cout<<"second largest "<<second;
    }
}
int main()
{
    int arr[]={2,9,4,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Second_Largest(arr,n);
}