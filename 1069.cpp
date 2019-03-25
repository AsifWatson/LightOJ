#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int my,lift;
        scanf("%d %d",&my,&lift);
        if(lift>=my) printf("Case %d: %d\n",++caseno,(lift*4)+19);
        else printf("Case %d: %d\n",++caseno,(((2*my)-lift)*4)+19);
    }
    return 0;
}
