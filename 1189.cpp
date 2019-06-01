#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long fact[20];
    fact[0]=1;
    for(long long j=1;j<=19;j++)
    {
        long long ans=1;
        for(long long i=1;i<=j;i++)
        {
            ans*=i;
        }
        fact[j]=ans;
    }
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        vector<int> v;
        for(int i=19;i>=0;i--)
        {
            if(fact[i]<=n)
            {
                n-=fact[i];
                v.push_back(i);
            }
        }
        if(n)printf("Case %d: impossible\n",++caseno);
        else
        {
            printf("Case %d: %d!",++caseno,v[v.size()-1]);
            for(int i=v.size()-2;i>=0;i--)
            {
                printf("+%d!",v[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
