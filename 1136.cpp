#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,ans=0;
        scanf("%d %d",&a,&b);
        if(a%3==1) a--;
        else if(a%3==2) a-=2;
        else if(a%3==0){ans+=1;}
        if(b%3==1) b--;
        else if(b%3==2) {b-=2; ans+=1;}
        ans+=(((b-a)/3)*2);
        printf("Case %d: %d\n",++caseno,ans);
    }
    return 0;
}
