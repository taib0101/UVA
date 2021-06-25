#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(ll n,ll p,ll m)
{
    if((n == 0))
        return 0;
    if(p == 0)
        return  1 % m;
    if(p == 1)
    {
        return n % m;
    }
    else if(p % 2 == 0)
    {
        int ans = solve(n,p/2,m);
        return ((ans)* (ans)) % m;
    }
    else
    {
        
        p--;
        int ans = solve(n,p,m);
        return ((n%m) * ans) % m;
    }
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("otput.txt","w",stdout);
    ll n, p, m;
    while(cin >> n >> p >> m)
    {
        cout << solve(n,p,m) << endl;
    }
    return 0;
}
