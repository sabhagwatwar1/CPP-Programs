#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int Partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void QuickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=Partition(arr,l,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,r,pi+1);
        
    }
}
int main()
{
    int arr[]={1,2,8,7,3,6};
    QuickSort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}