#include<bits/stdc++.h>
using namespace std;

struct point
{
    double x;
    double y;
};

point p[5];

double dist(point p1, point p2)
{
    return sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
}

double ternarySearch()
{
    double left,right;
    int num=64;

    while(num--)
    {
        point fa,la,fc,lc;
        fa.x=(2*p[1].x + p[2].x)/3.0;
        fa.y=(2*p[1].y + p[2].y)/3.0;
        la.x=(p[1].x + 2*p[2].x)/3.0;
        la.y=(p[1].y + 2*p[2].y)/3.0;

        fc.x=(2*p[3].x + p[4].x)/3.0;
        fc.y=(2*p[3].y + p[4].y)/3.0;
        lc.x=(p[3].x + 2*p[4].x)/3.0;
        lc.y=(p[3].y + 2*p[4].y)/3.0;

        left=dist(fa,fc);
        right=dist(la,lc);

        if(left>right){p[1]=fa; p[3]=fc;}
        else{p[2]=la; p[4]=lc;}
    }
    return abs(left+right)/2;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        for(int i=1;i<=4;i++)
        {
            scanf("%lf %lf",&p[i].x,&p[i].y);
        }
        printf("Case %d: %lf\n",tc,ternarySearch());
    }
    return 0;
}
