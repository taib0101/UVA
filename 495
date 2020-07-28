#include<bits/stdc++.h>
using namespace std;
vector<pair <int ,string> > pairr;
void ad_d()
{
    string first,second;
    vector< char > sum;
    first = '0';
    second = '1';
    pairr.push_back(make_pair(0,"0"));
    for(int i=1; i<=5000; ++i)
    {
        int len = first.size();
        int len1 = second.size();

        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());

        int rslt = 0, carry = 0;
        for(int f=0; f<len1; ++f)
        {
            rslt = (first[f]-'0') + (second[f] - '0') + carry;
            carry = rslt / 10;
            sum.push_back (rslt % 10 + '0');
        }
        for(int j=len1; j<len; ++j)
        {
            rslt = first[j] - '0' + carry;
            carry = rslt/10;
            sum.push_back(rslt % 10 + '0');
        }
        if(carry) sum.push_back('1');
        second = first;
        first.clear();

        for(int i=0; i<sum.size(); ++i)
        {
            first.push_back(sum[i]);//string can copy like that push_back
        }

        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());

        pairr.push_back(make_pair(i,first));

        sum.clear();
    }
    first.clear();
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    ad_d();
    while(cin>>n)
    {
        printf("The Fibonacci number for %d is ",pairr[n].first);
        cout<<pairr[n].second<<endl;
    }
    return 0;
}

