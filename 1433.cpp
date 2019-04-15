#include "bits/stdc++.h"
using namespace std;

struct point
{
    int x,y;
};

point p[4];

double dist(point p1,point p2)
{
    return sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
}

double angle()
{
    double a=dist(p[1],p[3]);
    double b=dist(p[1],p[2]);
    double c=dist(p[2],p[3]);
    if(a+b==c)return acos(-1);
    double x=(a*a+b*b-c*c)/(2*a*b);
    return acos(x);
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=1;i<=3;i++)scanf("%d%d",&p[i].x,&p[i].y);
        double r=dist(p[1],p[2]);
        double theta=angle();
        double s=r*theta;
        printf("Case %d: %lf\n",++caseno,s);
    }
    return 0;
}
