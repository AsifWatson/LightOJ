#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double R,theta,r,con,start,endd,mid;
        int n, cou=1;

        scanf("%lf %d",&R,&n);
        theta=pi/n;

        start=0;
        endd=R;

        while(cou<50)
        {
            mid=start+(endd-start)/2;
            r=mid/(R-mid);
            con=asin(r);

            if(con<theta)
            {
                start=mid;
            }
            else
            {
                endd=mid;
            }
            cou++;
        }

        printf("Case %d: %lf\n",i,mid);
    }
    return 0;
}
