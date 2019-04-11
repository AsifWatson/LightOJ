#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///freopen("in.txt", "rt", stdin);
    ///freopen("out.txt", "wt", stdout);
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if((a==1 || b==1) || (a==2 && b==2))
        {
            printf("Case %d: %d\n",++caseno,(a*b));
        }
        else if(a==2 || b==2)
        {
            int ans,line;
            if(a!=2)line=a;
            else line=b;
            ans=(line/4);
            ans*=2;
            if(line%4==1)ans++;
            if(line%4>1)ans+=2;
            ans*=2;
            printf("Case %d: %d\n",++caseno,ans);
        }
        else
        {
            printf("Case %d: %d\n",++caseno,(((a*b)+1)/2));
        }
    }
    return 0;
}
