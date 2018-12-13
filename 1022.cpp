#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double area;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double r;
        scanf("%lf",&r);
        area=(4-acos(-1))*(r*r);
        printf("Case %d: %.2lf\n",i,area+0.000000001);
    }
    return 0;
}
