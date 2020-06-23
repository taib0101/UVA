#include<bits/stdc++.h>
using namespace std;
const int mas = 10000;
bool fin[mas]= {0};
int prime[mas],i,j,k;
void sieve()
{
    fin[0] = 1;

    for(int i=2; i<=mas; i++)
    {
        if (fin[i]==0)
        {
            for(int j=i+i; j<=mas; j+=i)
            {
                fin[j] = 1;
            }
        }
    }
    for(int i=0,j=1; i<=mas; i++)
    {
        if(fin[i]==0)
        {
            prime[j++] = i;
        }
    }
}
int main()
{
    sieve();
    int n,c,m;
    while(cin>>n>>c)
    {
        for(i=1,k=0; prime[i]<= n; i++,k++) {}
        //cout<<"k==="<<k<<endl;
        cout<<n<<" "<<c<<":";

        if(c<n&& c<k)
        {
            if(k%2 ==0)
            {
                k = (k - (2*c))/2;
                if (k<0)
                    k=0;
                // cout<<k<<endl;
                for(k=k+1,i=1; i<=(2*c) &&prime[k]<=n; i++,k++)
                {
                    cout<<" "<<prime[k];
                }
            }
            else
            {
                k = (k - (2*c -1))/2;
                if (k<0)
                    k=0;
                for(k=k+1,i=1; i<=(2*c-1)&&prime[k]<=n; ++i,k++)
                {
                    cout<<" "<<prime[k];
                }
                //cout<<k<<endl;
            }
        }
        else
        {
            for(i=1; prime[i]<= n; i++)
            {
                cout<<" "<<prime[i];
            }
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
