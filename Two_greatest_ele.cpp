#include<bits/stdc++.h>
using namespace std;
void Two_greatest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                count++;
            }
        }
        if(count>=2)
         {
           cout<<arr[i]<<" ";
         }
    }
    

}
int main()
{
    int arr[]={1,2,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    Two_greatest(arr,n);
}