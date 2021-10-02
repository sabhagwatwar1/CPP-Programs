#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,9,2,8,3,6};
    int Maxi=INT_MIN;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        Maxi=max(Maxi,arr[i]);
    }
    cout<<"Largest number "<<Maxi<<endl;
}
