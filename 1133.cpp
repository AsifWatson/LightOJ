#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        long long arr[101];
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
        while(m--)
        {
            char ch;
            cin>>ch;
            if(ch=='S')
            {
                long long add;
                scanf("%lld",&add);
                for(int i=0;i<n;i++)arr[i]+=add;
            }
            if(ch=='M')
            {
                long long mul;
                scanf("%lld",&mul);
                for(int i=0;i<n;i++)arr[i]*=mul;
            }
            if(ch=='D')
            {
                long long div;
                scanf("%lld",&div);
                for(int i=0;i<n;i++)arr[i]/=div;
            }
            if(ch=='R')reverse(arr,arr+n);
            if(ch=='P')
            {
                long long x,y;
                scanf("%lld %lld",&x,&y);
                swap(arr[x],arr[y]);
            }
        }
        printf("Case %d:\n",++caseno);
        for(int i=0;i<n;i++)
        {
            if(!i)printf("%lld",arr[i]);
            else printf(" %lld",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
