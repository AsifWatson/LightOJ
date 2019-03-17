#include<bits/stdc++.h>
using namespace std;

long long n,matrix[205][105],dp[205][105];

long long call(int i,int j)
{
    if(i<n)
    {
        if((i>=1 && i<n) && (j>=1 && j<=i))
        {
            if(dp[i][j]!=-1) return dp[i][j];
            long long ret1,ret2;
            ret1=call(i+1,j)+matrix[i][j];
            ret2=call(i+1,j+1)+matrix[i][j];
            dp[i][j]=max(ret1,ret2);
            return dp[i][j];
        }
        else return 0;
    }
    else
    {
        if((i>=n && i<2*n) && (j>=1 && j<=(2*n)-i))
        {
            if(dp[i][j]!=-1) return dp[i][j];
            long long ret1,ret2;
            ret1=call(i+1,j)+matrix[i][j];
            ret2=call(i+1,j-1)+matrix[i][j];
            dp[i][j]=max(ret1,ret2);
            return dp[i][j];
        }
        else return 0;
    }
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                scanf("%lld",&matrix[i][j]);
            }
        }
        int J=1;
        for(int i=n+1;i<2*n;i++)
        {
            for(int j=1;j<=n-J;j++)
            {
                scanf("%lld",&matrix[i][j]);
            }
            J++;
        }
        printf("Case %d: %lld\n",++caseno,call(1,1));
    }
    return 0;
}
