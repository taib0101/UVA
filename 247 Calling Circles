//I seek refuse with Allah , from the accursed shaytan (devil)
//In the name of Allah, the Entirely Merciful, the Specially Merciful
/*
5 6
Ben Alexander
Alexander Dolly
Dolly Ben
Dolly Benedict
Benedict Dolly
Alexander Aaron
*/
#include<bits/stdc++.h>
using namespace std;
stack < string > st;
map < string , bool > vs1;
map < string , bool > vs2;

vector < string > y;
vector < string > ans;
int a;

void dfs1_scc(map < string , vector < string > > g,string u)
{
    vs1[u] = 1;
    for(int i = 0 ; i < g[u].size(); ++i)
    {
        string v = g[u][i];
        if(!vs1[v])
            dfs1_scc(g,v);
    }
    y.push_back(u);
}

void dfs2_scc(map < string, vector < string > > gt,string u)
{
    vs2[u] = 1;
    ans.push_back(u);
    for(int i = 0; i < gt[u].size(); ++i)
    {
        string v = gt[u][i];
        if(!vs2[v])
            dfs2_scc(gt,v);
    }
}

void SCC(map < string, vector < string > > g,map < string, vector < string > > gt,vector < string > x)
{
    vs1.clear();
    vs2.clear();
    for(auto i = 0; i < x.size(); ++i)
    {
        string u = x[i];
        //cout << "uu = " << u << endl;
        if(!vs1[u])
            dfs1_scc(g,u);
    }
    for(int i = y.size()-1; i >= 0; --i)
    {
        string u = y[i];
        if(!vs2[u])
        {
            dfs2_scc(gt,u);
            for(int j = 0; j < ans.size(); ++j)
            {
                cout << ans[j];
                if(j != ans.size()-1)
                    cout << ", ";
            }
            cout << endl;
            ans.clear();
        }
    }
    y.clear();

}

int main()
{
    int n, m, co = 1;
    while(cin >> n >> m && (n || m))
    {
        map < string , vector < string > > g;
        map < string , vector < string > > gt;
        map < string , bool > vi;
        vector < string > x;
        for(int i = 1; i <= m; ++i)
        {
            string u, v;
            cin >> u >> v;
            if(!vi[u])
            {
                x.push_back(u);
                vi[u] = 1;
            }
            if(!vi[v])
            {
                x.push_back(v);
                vi[v] = 1;
            }
            g[u].push_back(v);
        }
        for(int i = 0; i < x.size(); ++i)//updated 
        {
            string u = x[i];
            for(int j = 0; j < g[u].size(); ++j)
            {
                string v = g[u][j];
                gt[v].push_back(u);
            }
        }
        if(co != 1)
            cout << endl;
    
        printf("Calling circles for data set %d:\n",co);
        SCC(g,gt,x);
        co++;
    }
    return 0;
}
