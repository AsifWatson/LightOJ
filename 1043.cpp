#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        double AB,AC,BC,Ratio,AE,AD,DE,area1,s1,area2,s2;
        scanf("%lf %lf %lf %lf",&AB,&AC,&BC,&Ratio);
        double hi,lo,mid;
        lo=0;
        hi=AB;
        int cou=0;
        while(cou<70)
        {
            cou++;
            mid=(lo+hi)/2.0;
            AD=mid;
            AE=(AD*AC)/AB*1.0;
            DE=(AD*BC)/AB*1.0;
            s1=(AD+AE+DE)/2.0;
            s2=(AB+AC+BC)/2.0;
            area1=(sqrt(s1*(s1-AD)*(s1-AE)*(s1-DE)));
            area2=(sqrt(s2*(s2-AB)*(s2-AC)*(s2-BC))-area1);
            if((area1*1.0/area2*1.0)<Ratio)
            {
                lo=mid;
            }
            if((area1*1.0/area2*1.0)>Ratio)
            {
                hi=mid;
            }
        }
        printf("Case %d: %.8lf\n",i,(double)AD);
    }
    return 0;
}
