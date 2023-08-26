//I seek refused Allah , from the accursed devil
//In the name of Allah, the Entirely Merciful, the Specially Merciful
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        float sum1 = 0;
        cin >> n;
        float coins[n+10];
        for(int i = 1; i <= n; ++i)
            cin >> coins[i], sum1 += coins[i];
        sum1 /= 2;
        // printf("sum1 = %.2f\n",sum1); 
        int sum2 = (int ) (sum1);
        // printf("sum2 = %d\n",sum2);
        int dp[n+5][sum2+2];
        for(int i = 0; i <= n; ++i)
        {
            for(int j = 0; j <= sum2; ++j)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else
                {
                    int w = (int) (coins[i]);
                    // cout << "w = " << w << endl;
                    if(coins[i] <= j)
                        dp[i][j] = max(dp[i-1][j - w]+w,dp[i-1][j]);
                    else
                        dp[i][j] = dp[i-1][j];
                }
            }
        }
        // cout << "sum3 = " << dp[n][sum2] << endl;
        sum1 = abs((float) dp[n][sum2] - sum1);
        int result = (int ) (sum1*2);
        cout << result  << endl;
    }
    return 0;
}
