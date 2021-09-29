#include<bits/stdc++.h>
using namespace std;
int Knapsack(int Wt[],int val[],int n,int w)
{
    if(n==0||w==0)
    {
        return 0;
    }
    if(Wt[n-1]>w)
    {
        return Knapsack(Wt,val,n-1,w);
    }
    return max((Knapsack(Wt,val,n-1,w-Wt[n-1])+val(n-1),Knapsack(Wt,val,n-1,w));
}
int main()
{
    int Wt[]={10,20,30};
    int val[]={100,50,150};
    int w=50;
    cout<<Knapsack(Wt,val,3,w);
}