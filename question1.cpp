#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    memset(a,0,sizeof(a));
    int count=0;
    if(n%2==0)
    {
        for(int i=1;i<=n;i=i+2)
        {
            a[count++]=i;
            a[count++]=-1*i;
        }
    }
    else
    {
        a[0]=0;count++;
        for(int i=1;i<=n-1;i+=2)
        {
            a[count++]=i;
            a[count++]=-i*1;
        }
    }
    for(int i=0;i<count;i++)
    cout<<a[i]<<endl;
}