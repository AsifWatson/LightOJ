#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d: ",++caseno);
        set<int> accept[33],reject[33],check;
        int n,m,k,p;
        scanf(" %d %d %d",&n,&m,&k);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                int wish;
                scanf("%d",&wish);
                if(wish>0)accept[i].insert(wish);
                if(wish<0)reject[i].insert(-wish);
            }
        }
        scanf("%d",&p);
        for(int i=1;i<=p;i++)
        {
            int x;
            scanf("%d",&x);
            check.insert(x);
        }
        bool pre_break=false;
        for(int i=1;i<=n;i++)
        {
            int num=0;
            for(auto it=accept[i].begin();it!=accept[i].end();++it)
            {
                if(check.count(*it)>0)num++;
            }
            for(auto it=reject[i].begin();it!=reject[i].end();++it)
            {
                if(check.count(*it)==0)num++;
            }
            if(num==0)
            {
                printf("No\n");
                pre_break=true;
                break;
            }
        }
        if(!pre_break)printf("Yes\n");
    }
    return 0;
}
