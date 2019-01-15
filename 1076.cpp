#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m,summ=0,mx=0;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            summ+=a[j];
            mx=max(mx,a[j]);
        }
        if(m==1)
        {
            printf("Case %d: %d\n",i,summ);
            continue;
        }
        int lo=mx,hi=summ,mid,ans;
        while(lo<hi)
        {
            mid=(hi+lo)>>1;
            int sum=0,part=0;
            for(int j=0;j<n;j++)
            {
                if(sum+a[j]>mid)
                {
                    sum=0;
                    part++;
                }
                sum+=a[j];
            }
            if(sum>0)
            {
                part++;
            }
            if(part<=m)
            {
                ans=mid;
                hi=mid;
            }
            if(part>m)
            {
                lo=mid+1;
            }
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
