#include <bits/stdc++.h>
using namespace std;
#define int long long
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int compute(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];
 
    // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
signed main()
{
    int n;
    cin>>n;
    int *val=new int[n];
    int *wt=new int[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        wt[i]=k;
    }
    for(int i=0;i<n;i++)
    {
        int k1;
        cin>>k1;
    val[i]=k1;
    }
    int weights;
    cin>>weights;
    int s=compute(weights,wt,val,n);
    cout<<s<<endl;
}