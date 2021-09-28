#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a[n+1];
     a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int mx=-1;
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1] && a[i]>mx)
        {
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<ans<<endl;
}