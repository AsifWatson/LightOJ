#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        long long w,n,m;
        scanf("%lld",&w);
        if(w&1) printf("Case %d: Impossible\n",++caseno);
        else
        {
            m=1;n=w;
            while(n%2==0){n/=2;m*=2;}
            printf("Case %d: %lld %lld\n",++caseno,n,m);
        }
    }
    return 0;
}
