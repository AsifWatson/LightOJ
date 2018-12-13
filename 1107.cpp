#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x1,y1,x2,y2,m;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        printf("Case %d:\n",i);
        for(int j=0;j<m;j++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if((a>x1 && a<x2) && (b>y1 && b<y2))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}
