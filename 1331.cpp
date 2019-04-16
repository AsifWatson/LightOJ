#include "bits/stdc++.h"
using namespace std;

double triangleArea(double a,double b,double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double circleArea(double r,double theta)
{
    return (theta*r*r)/2;
}

double angle(double a,double b,double c)
{
    return acos((a*a+b*b-c*c)/(2*a*b));
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        double r1,r2,r3;
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        double triangle_area=triangleArea(r1+r2,r2+r3,r3+r1);
        double theta1=angle(r1+r2,r1+r3,r2+r3);
        double theta2=angle(r1+r2,r2+r3,r1+r3);
        double theta3=angle(r2+r3,r1+r3,r1+r2);
        double area_circle1=circleArea(r1,theta1);
        double area_circle2=circleArea(r2,theta2);
        double area_circle3=circleArea(r3,theta3);
        double area=triangle_area-(area_circle1+area_circle2+area_circle3);
        printf("Case %d: %lf\n",++caseno,area);
    }
    return 0;
}
