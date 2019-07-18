#include "bits/stdc++.h"
using namespace std;

int diameter[30005];
map<pair<int,int>,int>mp;

int bfs(int init,vector<int>graph[],int n)
{
    int visited[n];
    memset(visited,0,sizeof(visited));
    memset(diameter,0,sizeof(diameter));

	queue<int> q;
	q.push(init);
    visited[init]=1;

	while(!q.empty())
    {
		int u=q.front();
		q.pop();
		for(int i=0;i<graph[u].size();i++)
		{
			if(!visited[graph[u][i]])
			{
				visited[graph[u][i]]=1;
				diameter[graph[u][i]]+=diameter[u]+mp[{u,graph[u][i]}];
				q.push(graph[u][i]);
			}
		}
	}

	return int(max_element(diameter,diameter+n)-diameter);
}

int findDiameter(vector<int>graph[],int n)
{
	int init=bfs(0,graph,n);
	int val=bfs(init,graph,n);
	return diameter[val];
}


int main()
{
    int t,caseno=0;
    scanf("%d",&t);
    while(t--)
    {
        int node;
        scanf("%d",&node);
        vector<int> graph[node+5];
        for(int i=1;i<node;i++)
        {
            int a,b,w;
            scanf("%d %d %d",&a,&b,&w);
            graph[a].push_back(b);
            graph[b].push_back(a);
            mp[{a,b}]=w;
            mp[{b,a}]=w;
        }
        printf("Case %d: %d\n",++caseno,findDiameter(graph,node));
        mp.clear();
    }
    return 0;
}
