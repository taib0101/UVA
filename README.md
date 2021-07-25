#include<bits/stdc++.h>
using namespace std;
map < string , string > ms;
map < string , int > mi;
string find(string u)
{
    if(ms[u] == u)
        return u;
    ms[u] = find(ms[u]);
    return ms[u];
}
int maxx;
void Union(string v,string u)
{
    u = find(u);
    v = find(v);

    if(u != v)
    {
        ms[v] = u;
        mi[u] += mi[v];
        maxx = mi[u];
        //cout <<  u << " = " << mi[u] << " , " << v << " = " << mi[v] << endl;
    }
    else
        maxx = mi[u];
}
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ms.clear();
        mi.clear();
        maxx = 0;
        vector < pair < string, string > > vp;
        for(int i = 1; i <= n; ++i)
        {
            string u, v;
            cin >> u >> v;
            mi[u] = 1;
            mi[v] = 1;
            ms[u] = u;
            ms[v] = v;
            vp.push_back({u,v});
        }
        vector < int > vv;
        for(int i = 0; i < vp.size(); ++i)
        {
            string u, v;
            u = vp[i].first;
            v = vp[i].second;
            //cout << "here = " << u << ", " << v << endl;
            Union(u,v);
            vv.push_back(maxx);
        }
        for(int i = 0; i < vv.size(); ++i)
            cout << vv[i] << endl;
    }
    //cout << endl;
    return 0;
}
