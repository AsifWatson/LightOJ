#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll divideBigNumber(string num, ll divisor,int ind)
{
    ll mod=0;
    for(int i=ind;i<num.size();i++)
    {
        int digit=num[i]-'0';
        mod=mod*10+digit;
        mod=mod%divisor;
    }
    return mod;
}

int main()
{

    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        string a;
        ll b;
        int ind=0;
        cin>>a>>b;
        if(a[0]=='-')ind=1;
        if(!divideBigNumber(a,abs(b),ind)) printf("Case %d: divisible\n",++caseno);
        else printf("Case %d: not divisible\n",++caseno);
    }
    return 0;
}
