#include <bits/stdc++.h>
#define int long long
#define pii pair <int, int>
#define fi first
#define se second
#define endl "\n"
#define BIT(x,i) (((x)>>(i))&1)
using namespace std;
const int mod = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(ifstream(".inp"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }
    int n;
    cin>>n;
    double a,maxx=-mod,minn=mod;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        maxx=max(a,maxx);
        minn=min(a,minn);
    }
    cout<<maxx<<' '<<minn<<endl;
    return 0;
}
/*

*/
/*
    (\_/)        I wish I was a cat
    (•_•)       No school, no works
    /> />         Just moew moew.

*/

