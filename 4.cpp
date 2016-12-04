//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<map>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int n, m;
//#define INF 0x3f3f3f3f;
//
//struct P
//{
//	int dis;
//	int index;
//	bool operator<(const P&rhs)const
//	{
//		return dis >rhs.dis;
//	}
//};
//bool cmp(const P&lhs, const P&rhs)
//{
//	return lhs.dis>rhs.dis;
//}
//
//struct Edge
//{
//	int to;
//	int dis;
//	int next;
//	Edge()
//	{
//		to = 0;
//		dis = 0;
//		next = -1;
//	}
//}edges[110000];
//int head[11000];
//int tot = 0;
//void addEdge(int from, int to,int dis)
//{
//	edges[tot].to = to;
//	edges[tot].next = head[from];
//	edges[tot].dis = dis;
//	head[from] = tot++;
//}
//
//int dis[11000];
//int link[11000];
//
//
//int dijkstral(int s)
//{
//	int ret = 0;
//	priority_queue<P, vector<P> >que;
//	for (int i = 1; i <= n; ++i) {
//		dis[i] = INF;
//		link[i] = INF;
//	}
//	dis[1] = 0;
//	P p;
//	p.dis = 0;
//	p.index = 1;
//	que.push(p);
//	while (!que.empty())
//	{
//		P v = que.top();
//		que.pop();
//		int s = v.index;
//		int ce = head[s];
//		for (int i = ce; i!=-1; i = edges[i].next)
//		{
//			Edge e = edges[i];
//			if (dis[e.to] == dis[s] + e.dis&&link[e.to] > e.dis)
//			{
//				link[e.to] = e.dis;
//			}
//			if (dis[e.to] >dis[s] + e.dis)
//			{
//				dis[e.to] = dis[s] + e.dis;
//				P np;
//				np.dis = dis[e.to];
//				np.index = e.to;
//				que.push(np);
//				link[e.to] = e.dis;
//			}
//		}
//	}
//	for (int i = 2; i <= n; ++i)
//		ret += link[i];
//	return ret;
//}
//
//int main()
//{
//	scanf("%d %d", &n, &m);
//	memset(head, -1, sizeof(head));
//	//改造最短路径
//	int f, t, d;
//	for (int i = 0; i < m; ++i)
//	{
//		scanf("%d %d %d", &f, &t, &d);
//		addEdge(f, t, d);
//		addEdge(t, f, d);
//	}
//	int res = dijkstral(1);
//
//	//不相连的加边
//	printf("%d\n", res);
//	return 0;
//}