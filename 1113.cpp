#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        stack<string> left,right;
        string s,cur="http://www.lightoj.com/";
        printf("Case %d:\n",i);
        while(true)
        {
            cin>>s;
            if(s=="VISIT")
            {
                string url;
                cin>>url;
                cout<<url<<endl;
                left.push(cur);
                cur=url;
                while(!right.empty())
                {
                    right.pop();
                }
            }
            if(s=="BACK")
            {
                if(left.size()>0)
                {
                    right.push(cur);

                    cur=left.top();
                    left.pop();
                    cout<<cur<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
            }
            if(s=="FORWARD")
            {
                if(right.size()>0)
                {
                    left.push(cur);
                    cur=right.top();
                    right.pop();
                    cout<<cur<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
            }
            if(s=="QUIT")
            {
                break;
            }
        }
    }
    return 0;
}
