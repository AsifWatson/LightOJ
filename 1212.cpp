#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        deque<int> d;
        int n,m;
        cin>>n>>m;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1;j<=m;j++)
        {
            string s;
            cin>>s;
            if(s=="pushLeft")
            {
                int x;
                cin>>x;
                if(d.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    d.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            if(s=="pushRight")
            {
                int x;
                cin>>x;
                if(d.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    d.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            if(s=="popLeft")
            {
                if(d.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from left: "<<d.front()<<endl;
                    d.pop_front();
                }
            }
            if(s=="popRight")
            {
                if(d.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from right: "<<d.back()<<endl;
                    d.pop_back();
                }
            }
        }
    }
    return 0;
}
