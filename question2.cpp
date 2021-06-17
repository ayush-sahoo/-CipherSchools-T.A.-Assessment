#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    int *prices=new int[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        prices[i]=k;

    }
    int money;int count=0;
    cin>>money;
    for(int i=0;i<n;i++)
    {
        if(money%prices[i]==0)
        count++;
    }
    cout<<count<<endl;
}