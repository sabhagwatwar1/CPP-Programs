#include<bits/stdc++.h>
using namespace std;
void Most_Occuring(int arr[],int n)
{
    int Max=0;
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>Max)
        {
            Max=count;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count==Max)
        {
            cout<<arr[i]<<endl;
        }
    }
}
int main()
{
    int arr[]={1,2,4,1,6,7,9,7,7,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Most_Occuring(arr,n);
}