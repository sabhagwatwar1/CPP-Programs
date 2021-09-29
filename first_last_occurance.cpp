#include<bits/stdc++.h>
using namespace std;
int FirstOccur(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return FirstOccur(arr,n,i+1,key);    
}
int LastOccur(int arr[],int n,int i,int key)
{
   int restArray=LastOccur(arr,n,i+1,key);
   if(restArray!=-1)
   {
       return restArray;
   }
   if(arr[i]==key)
   {
       return i;
   }
   return -1;
}
int main()
{
    int arr[]={1,2,3,4,2,5};
    cout<<FirstOccur(arr,5,0,2);
    cout<<LastOccur(arr,5,0,2);
}