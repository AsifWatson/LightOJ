#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int z=1;z<=t;z++)
    {
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
            {
                sum+=a[i];
            }
        }
        printf("Case %d: %d\n",z,sum);
    }
    return 0;
}
