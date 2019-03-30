#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d:\n",++caseno);
        int n,sum=0;
        scanf("%d",&n);
        while(n--)
        {
            char s[10];
            scanf("%s",s);
            if(s[0]=='r') printf("%d\n",sum);
            if(s[0]=='d')
            {
                int donation;
                scanf("%d",&donation);
                sum+=donation;
            }
        }
    }
    return 0;
}
