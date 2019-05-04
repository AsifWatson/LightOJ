#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<pair<int,string> >v;
        while(n--)
        {
            string s;
            int length,width,height;
            cin>>s;
            scanf("%d %d %d",&length,&width,&height);
            v.push_back({length*width*height,s});
            getchar();
        }
        sort(v.begin(),v.end());
        if(v[0].first==v[v.size()-1].first)printf("Case %d: no thief\n",++caseno);
        else
        {
            printf("Case %d: ",++caseno);
            cout<<v[v.size()-1].second<<" took chocolate from "<<v[0].second<<endl;
        }
    }
    return 0;
}
