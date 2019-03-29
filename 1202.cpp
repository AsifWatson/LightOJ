#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a-c==b-d || a+b==c+d) {printf("Case %d: 1\n",++caseno); continue;}
        a-=b-d;
        if((abs(a-c))%2==0) printf("Case %d: 2\n",++caseno);
        else printf("Case %d: impossible\n",++caseno);
    }
    return 0;
}
