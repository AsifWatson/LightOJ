#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    int increase=1,sum=0;
    while(n)
    {
        int lastDigit=n%10;
        n/=10;
        if(lastDigit){sum+=increase;}
        increase*=2;
    }
    return sum;
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,A,B,C,D;
        char c1,c2,c3,C1,C2,C3;
        scanf("%d%c%d%c%d%c%d",&a,&c1,&b,&c2,&c,&c3,&d);
        scanf("%d%c%d%c%d%c%d",&A,&C1,&B,&C2,&C,&C3,&D);
        if(a==f(A) && b==f(B) && c==f(C) && d==f(D)) printf("Case %d: Yes\n",++caseno);
        else printf("Case %d: No\n",++caseno);
    }
}
