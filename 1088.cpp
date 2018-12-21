#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        vector<int> v;
        vector<int> :: iterator low,up;
        for(int j=1; j<=n; j++)
        {
            int temp;
            scanf("%d",&temp);
            v.push_back(temp);
        }
        printf("Case %d:\n",i);
        for(int j=1; j<=q; j++)
        {
            int A,B;
            scanf("%d %d",&A,&B);
            low=lower_bound(v.begin(),v.end(),A);
            up=upper_bound(v.begin(),v.end(),B);
            printf("%d\n",(up-v.begin())-(low-v.begin()));
        }
    }
    return 0;
}
