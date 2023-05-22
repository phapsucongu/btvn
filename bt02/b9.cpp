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
	cin >> n;
    int minx, miny;
    cin >> minx >> miny;
    int maxx = 0;
    for(int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a < minx) minx = a;
        if(b < miny) miny = b;
    }
    cout << minx * miny;
    return 0;

}
/*

*/
/*
    (\_/)        I wish I was a cat
    (•_•)       No school, no works
    /> />         Just moew moew.

*/

