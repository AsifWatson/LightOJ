#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,ans;
        scanf("%lld %lld",&a,&b);
        ans=(a*b)/2;
        printf("Case %d: %lld\n",++caseno,ans);
    }
}
