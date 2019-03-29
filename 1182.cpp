#include<bits/stdc++.h>
using namespace std;

bool parity(int n)
{
    int ans=0;
    while(n){if(n&1) ans++;n/=2;}
    if(ans&1) return false;
    return true;
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(!parity(n)) printf("Case %d: odd\n",++caseno);
        else printf("Case %d: even\n",++caseno);
    }
    return 0;
}
