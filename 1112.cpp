#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

#define mx 100001

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
    tree[node]=tree[leftNode]+tree[rightNode];
}

int query(int node,int st,int ed,int i,int j)
{
    if(i>ed || j<st)
    {
        return 0;
    }
    if(st>=i && ed<=j)
    {
        return tree[node];
    }
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(st+ed)/2;
    int p1=query(leftNode,st,mid,i,j);
    int p2=query(rightNode,mid+1,ed,i,j);
    return p1+p2;
}
void update(int node,int st,int ed,int i,int newValue)
{
    if(i>ed || i<st)
    {
        return;
    }
    if(st>=i && ed<=i)
    {
        tree[node]=newValue;
        return;
    }
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(st+ed)/2;
    update(leftNode,st,mid,i,newValue);
    update(rightNode,mid+1,ed,i,newValue);
    tree[node]=tree[leftNode]+tree[rightNode];
}


int main()
{
    IOS
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,q;
        printf("Case %d:\n",i);
        scanf("%d %d",&n,&q);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        build(1,1,n);
        for(int j=1;j<=q;j++)
        {
            int a,b,c;
            scanf("%d",&a);
            if(a==1)
            {
                scanf("%d",&b);
                b++;
                update(1,1,n,b,0);
                printf("%d\n",arr[b]);
                arr[b]=0;
            }
            if(a==2)
            {
                scanf("%d %d",&b,&c);
                b++;
                arr[b]=arr[b]+c;
                update(1,1,n,b,arr[b]);
            }
            if(a==3)
            {
                scanf("%d %d",&b,&c);
                b++;
                c++;
                printf("%d\n",query(1,1,n,b,c));
            }
        }
    }
    return 0;
}
