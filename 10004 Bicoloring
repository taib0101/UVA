#include<bits/stdc++.h>
using namespace std;
const int N = 250;
bool fg;
void bicolor(vector < int > gh[],bool vs[],bool c[],int u)
{
    int x = 0;
    for(int i = 0; i < gh[u].size() && !fg; ++i)
    {
        int v = gh[u][i];
        if(!vs[v])
        {
            if(c[u] == 0)
                c[v] = 1;
            else
                c[v] = 0;
            vs[v] = 1;
            bicolor(gh,vs,c,v);
        }
        else
        {
            if(c[u] == c[v])
            {
                fg = 1;
                return;
            }
        }
    }
    return;
}

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    while(cin >> n && n)
    {
        int t;
        cin >> t;
        vector < int > gh[210];
        for(int i = 0; i < t; ++i)
        {
            int u, v;
            cin >> u >> v;
            gh[u].push_back(v);
            gh[v].push_back(u);
        }
        bool visit[250];
        memset(visit,0,sizeof(visit));
        bool color[250];
        memset(color,0,sizeof(color));
        color[0] = 0;
        visit[0] = 1;
        fg = 0;
        bicolor(gh,visit,color,0);
        if(fg)
            cout << "NOT BICOLORABLE." << endl;
        else
            cout << "BICOLORABLE." << endl;
    }
    return 0;
}
