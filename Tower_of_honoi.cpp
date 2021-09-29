#include<bits/stdc++.h>
using namespace std;
void TowerofHono(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    TowerofHono(n-1,src,helper,dest);
    cout<<"Move from"<<src<<"To"<<dest<<endl;
    TowerofHono(n-1,helper,dest,src);
}
int main()
{
    TowerofHono(3,'A','C','B');
}