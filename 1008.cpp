#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long n,r,check,x,y,high,low;
        scanf("%lld",&n);

        r=sqrt(n);
        check=r*r;

        if(n==check)
        {
            if(r%2==0)
            {
                x=r;
                y=1;

            }
            if(r%2==1)
            {
                x=1;
                y=r;
            }
        }
        else
        {
            long long st,ed,mid;
            low=r;
            high=r+1;

            st=(low*low)+1;
            mid=st+low;
            ed=high*high;

            if(low%2==0)
            {
                if(n==mid)
                {
                    x=high;
                    y=high;
                }
                if(n>=st && n<mid)
                {
                    x=high;
                    y=n-st+1;
                }
                if(n>mid && n<=ed)
                {
                    x=ed-n+1;
                    y=high;
                }
            }
            if(low%2==1)
            {
                if(n==mid)
                {
                    x=high;
                    y=high;
                }
                if(n>=st && n<mid)
                {
                    x=n-st+1;
                    y=high;
                }
                if(n>mid && n<=ed)
                {
                    x=high;
                    y=ed-n+1;
                }
            }
        }
        printf("Case %d: %lld %lld\n",i,x,y);
    }
    return 0;
}
