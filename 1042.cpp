#include<bits/stdc++.h>
using namespace std;

int ones(int n)
{
    int coun=0;
    while(n)
    {
        if(n&1)
        {
            coun++;
        }
        n/=2;
    }
    return coun;
}

int func(int n,int one)
{
    int coun=0,pos=0;
    while(n)
    {
        if(coun && n%2==0)
        {
            break;
        }
        if(n&1)
        {
            coun++;
        }
        n/=2;
        pos++;
    }
    int sum=0,ikra=1;
    for(int i=1;i<coun;i++)
    {
        sum+=ikra;
        ikra*=2;
    }
    ikra=pow(2,pos);
    sum+=ikra;
    int rest=one-coun;
    while(n)
    {
        if(n&1)
        {
            sum+=ikra;
        }
        ikra*=2;
        n/=2;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",i,func(n,ones(n)));
    }
    return 0;
}
