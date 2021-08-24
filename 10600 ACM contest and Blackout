//In the name of Allah , the entirelly mercifull , the spacially mercifull
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int uu;
    int vv;
    int cc;
};
bool cmp(struct node x,struct node y)
{
    return x.cc < y.cc;
}
int findd(int u, int *pr)
{
    if(pr[u] == u)
        return u;
    pr[u] = findd(pr[u],pr);
    return pr[u];
}
pair < int , int > make_union(vector < node > vn,int pr[],int rk[],int n)
{
    int sum1 = 0, sum2 = 0;
    int count = 0;
    vector < int > visited_node;
    for(int i = 0; i < vn.size(); ++i)// for first minimumm spanning tree
    {
        int u = findd(vn[i].uu,pr);
        int v = findd(vn[i].vv,pr);
        if(u != v)
        {
            if(rk[u] > rk[v])
                pr[v] = u;
            else if(rk[u] < rk[v])
                pr[u] = v;
            else
            {
                pr[v] = u;
                rk[u]++;
            }
            sum1 += vn[i].cc;
            count++;
            visited_node.push_back(i);
            if(count == n-1)
                break;
        }
    }
    int minn = 1000000;
    for(int i = 0; i < visited_node.size(); ++i)// second cost of minimum spenning tree
    {
        count = 0, sum2 = 0;
        for(int j = 1; j <= n; ++j)
            pr[j] = j, rk[j] = 0;
        for(int j = 0; j < vn.size(); ++j)
        {
            if(visited_node[i] != j)
            {
                int u = findd(vn[j].uu,pr);
                int v = findd(vn[j].vv,pr);
                if(u != v)
                {
                    if(rk[u] > rk[v])
                        pr[v] = u;
                    else if(rk[u] < rk[v])
                        pr[u] = v;
                    else
                    {
                        pr[v] = u;
                        rk[u]++;
                    }
                    sum2 += vn[j].cc;
                    count++;
                    if(count == n-1)
                        break;
                }
            }
        }
        if(count == n-1 && sum1 <= sum2)
            minn = min(minn,sum2);
    }
    sum2 = minn;
    return {sum1,sum2};
}
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    while(t--)

    {
        int n, m;
        cin >> n >> m;
        int pr[n+10],rk[n+10];
        for(int i = 1; i <= n; ++i)
            pr[i] = i, rk[i] = 0;
        vector < node > vn;
        for(int i = 0; i < m; ++i)
        {
            int u, v, c;
            cin >> u >> v >> c;
            vn.push_back({u,v,c});
        }
        sort(vn.begin(),vn.end(),cmp);
        pair < int , int > pu = make_union(vn,pr,rk,n);
        cout << pu.first << " " << pu.second << endl;
    }
    return 0;
}
