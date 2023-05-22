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
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=x;j<=n;j++){
            cout<<j<<' ';
        }
        for(int j=1;j<x;j++){
            cout<<j<<' ';
        }
        cout<<endl;
        x++;
    }
}
/*

*/
/*
    (\_/)        I wish I was a cat
    (•_•)       No school, no works
    /> />         Just moew moew.

*/
