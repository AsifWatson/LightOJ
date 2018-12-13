#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,r,r2,h,p;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&r,&r2,&h,&p);
        double v;
        double r1,pi,r12,r22;
        r1=((double)(((double)r-(double)r2)/(double)h)*(double)((double)h-(double)p));
        r1=(double)((double)r-(double)r1);

        pi=(double)(((double)p*acos(-1))/3);
        r12=(r1*r1);
        r22=(double)(r2*r2);

        v=pi*(double)(r12+r22+(double)((double)r1*(double)r2));
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
