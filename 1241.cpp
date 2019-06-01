#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,total=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(!i && a[i]>2)
            {
                int dif=a[i]-2;
                total+=(dif+4)/5;
            }
            if(i)
            {
                int dif=a[i]-a[i-1];
                total+=(dif+4)/5;
            }
        }
        printf("Case %d: %d\n",++caseno,total);
    }
    return 0;
}
