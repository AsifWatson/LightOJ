#include<bits/stdc++.h>
using namespace std;

long long n,coin[55],totalCoin[55],dp[55][55][1010];

long long call(long long i,long long taken_i,long long amount)
{
    if(i==n)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][taken_i][amount]!=-1) return dp[i][taken_i][amount];

    long long ret1=0,ret2=0;
    if(amount-coin[i]>=0 && totalCoin[i]>taken_i)
    {
        ret1=call(i,taken_i+1,amount-coin[i]);
    }
    ret2=call(i+1,0,amount);

    dp[i][taken_i][amount]=(ret1+ret2)%100000007;

    return dp[i][taken_i][amount];
}

int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long Case=1;Case<=t;Case++)
    {
        memset(dp,-1,sizeof(dp));
        memset(coin,0,sizeof(coin));
        memset(totalCoin,0,sizeof(totalCoin));
        long long k;
        scanf("%lld %lld",&n,&k);
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&coin[i]);
        }
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&totalCoin[i]);
        }
        printf("Case %lld: %lld\n",Case,call(0,0,k));
    }
    return 0;
}
