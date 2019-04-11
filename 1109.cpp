#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > v;
map<int,int> mp;
void func()
{
    for(int i=1;i<=1000;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)c++;
        }
        v.push_back({c*-1,i});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        mp[i+1]=v[i].second;
    }
}

int main()
{
    func();
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",++caseno,mp[n]);
    }
}
