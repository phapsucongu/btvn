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
    int n; cin >> n;
    char pre = '0';
    int dif = 0;
    int same = 0;
    int ans = 0;
    bool e;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        if(c != pre){
            e = false;
            dif++;
            same = 1;
        }
        else{
            same++;
        }
        if(!e && same >= 2){
            ans++;
            e = true;
        }
        pre = c;
    }
    ans += ((dif - 1) * dif / 2);
    cout << ans;
    return 0;
}
/*

*/
/*
    (\_/)        I wish I was a cat
    (•_•)       No school, no works
    /> />         Just moew moew.

*/
