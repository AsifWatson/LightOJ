#include "bits/stdc++.h"
using namespace std;

//double intlog(double x,double base) {return (log10(x)/log10(base));}

/*int findDigits(int n,int base)
{
    if(n==0 || n==1)return 1;
    double x=((n*intlog((double)(n/M_E),(double)base))+(intlog((double)2*M_PI*n,(double)base)/2.0));
    return floor(x) + 1;
}*/

/*int findDigits(int n,int base)
{
    if(n==0 || n==1)return 1;
    double digit=0;
    for(int i=2;i<=n;i++)digit+=(log10(i)/log10(base));
    return floor(digit)+1;
}*/

double sum[1000005];
int main()
{
    for(int i=0;i<=1000000;i++)sum[i]=0;
    for(int i=1;i<=1000000;i++)sum[i]=sum[i-1]+log10(i);
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int ans=sum[a]/log10(b);
        ans++;
        printf("Case %d: %d\n",++caseno,ans/*findDigits(a,b)*/);
    }
    return 0;
}
