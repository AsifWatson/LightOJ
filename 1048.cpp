#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> v;

bool optimal(int mid)
{
    int sum=0,part=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>mid)
        {
            return false;
        }
        else if(sum+v[i]<=mid)
        {
            sum+=v[i];
        }
        else
        {
            part++;
            sum=v[i];
        }
    }
    return part<=k;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int z=1; z<=t; z++)
    {
        int lo=0,hi=0,ans,mid,sum=0;
        scanf("%d%d",&n,&k);

        for(int i=0; i<=n; i++)
        {
            int a;
            scanf("%d",&a);
            hi+=a;
            lo=max(lo,a);
            v.push_back(a);
        }

        while(hi-lo>5)
        {
            mid=(lo+hi)/2;
            if(optimal(mid))
            {
                hi=mid;
            }
            else
            {
                lo=mid;
            }
        }

        for(int i=hi; i>=lo; i--)
        {
            if(optimal(i))
            {
                ans=i;
            }
        }

        printf("Case %d: %d\n",z,ans);

        int part=k+1;
        for(int i=0; i<v.size(); i++)
        {
            sum+=v[i];
            if(sum>ans)
            {
                printf("%d\n",sum-v[i]);
                sum=v[i];
                part--;
            }
            if(part==v.size()-i)
            {
                printf("%d\n",sum);
                for(int j=i+1;j<v.size();j++)
                {
                    printf("%d\n",v[j]);
                }
                break;
            }
        }
        v.clear();
    }
    return 0;
}
