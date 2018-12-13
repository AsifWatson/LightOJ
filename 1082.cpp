#include<bits/stdc++.h>
using namespace std;

#define mx 100002

int arr[mx];
int tree[mx*3];

void build(int node,int st,int ed)
{
    if(st==ed)
    {
        tree[node]=arr[st];
        return;
    }
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(st+ed)/2;
    build(leftNode,st,mid);
    build(rightNode,mid+1,ed);
    tree[node]=min(tree[leftNode],tree[rightNode]);
}

int query(int node,int st,int ed,int i,int j)
{
    if(i>ed || j<st)
    {
        return 10000000;
    }
    if(st>=i && ed<=j)
    {
        return tree[node];
    }
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(st+ed)/2;
    return min(query(leftNode,st,mid,i,j),query(rightNode,mid+1,ed,i,j));
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        int n,q;
        scanf("%d %d",&n,&q);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        build(1,1,n);
        for(int j=1;j<=q;j++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",query(1,1,n,a,b));
        }
    }
    return 0;
}

