#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        double v1,v2,v3,a1,a2,train_1_dist,train_2_dist,total_dist,bird_dist,time;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);

        train_1_dist=((v1*v1)/(2*a1));  /// v^2=u^2+2as;=> s=u^2/2a;[v=0]
        train_2_dist=((v2*v2)/(2*a2));
        total_dist=train_1_dist+train_2_dist;

        time=max((v2/a2),(v1/a1)); /// v=u+at; => t=u/a; [v=0]

        bird_dist=time*v3;

        printf("Case %d: %lf %lf\n",++caseno,total_dist,bird_dist);
    }
    return 0;
}
