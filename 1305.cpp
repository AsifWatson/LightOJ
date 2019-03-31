#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};

point p[5];

double dist(point p1,point p2)
{
    return sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
}

double area(point p1,point p2,point p3)
{
    double dist1,dist2,dist3,s;
    dist1=dist(p1,p2);
    dist2=dist(p2,p3);
    dist3=dist(p3,p1);
    s=(dist1+dist2+dist3)/2;
    return sqrt(s*(s-dist1)*(s-dist2)*(s-dist3));
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=1;i<=3;i++)
        {
            scanf("%d %d",&p[i].x,&p[i].y);
        }
        p[4].x=p[3].x-(p[2].x-p[1].x);
        p[4].y=p[1].y+(p[3].y-p[2].y);
        double Area;
        Area=2*area(p[1],p[2],p[3]);
        //long long ans=(long long)Area;
        printf("Case %d: %d %d %.0lf\n",++caseno,p[4].x,p[4].y,Area);
    }
}
