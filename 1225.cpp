#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int num=0;
    while(n)
    {
        int rem=n%10;
        n/=10;
        num=(num*10)+rem;
    }
    return num;
}

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==rev(n)) printf("Case %d: Yes\n",++caseno);
        else printf("Case %d: No\n",++caseno);
    }
    return 0;
}
