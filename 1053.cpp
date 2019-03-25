#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) printf("Case %d: yes\n",++caseno);
        else printf("Case %d: no\n",++caseno);
    }
    return 0;
}
