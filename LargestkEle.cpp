#include<bits/stdc++.h>
using namespace std;
void LargestK(int arr[],int n,int k)
{
    sort(arr,arr+n,greater<int>());
    cout<<"Largest "<<k<<" Elements"<<"  ";
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,8,1,9,2,9,16,22,3,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    LargestK(arr,n,k);
}