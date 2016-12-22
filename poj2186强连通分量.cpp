////求出某些点能被其他所有点可到达
////在一个牛所属的强连通分量中，如果有一个牛被认为是红牛，那么整个
////强连通分量都被认为为红牛
////只有检查强连通分量是否被所有定点可达
//#include<vector>
//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//#define MAX_V 110
//
//int V;
//vector<int>G[MAX_V];
//vector<int>rG[MAX_V];//边反向
//vector<int>vs;//后序遍历的标记
//bool used[MAX_V];
//int cmp[MAX_V];//所属连通分支
//
//
//
//void add_edge(int from, int to)
//{
//	G[from].push_back(to);
//	rG[to].push_back(from);
//}
//
//void dfs(int v)
//{
//	used[v] = true;
//	for (int i = 0; i < G[v].size(); ++i)
//	{
//		if (!used[G[v][i]])dfs(G[v][i]);
//	}
//	vs.push_back(v);
//}
//void rdfs(int v, int k)
//{
//	used[v] = true;
//	cmp[v] = k;
//	for (int i = 0; i < rG[v].size(); ++i)
//	{
//		if (!used[rG[v][i]])rdfs(rG[v][i],k);
//	}
//}
//
//int scc()
//{
//	memset(used, 0, sizeof(used));
//	vs.clear();
//	for (int v = 0; v < V; ++v)
//	{
//		if (!used[v])dfs(v);
//	}
//	memset(used, 0, sizeof(used));
//	int k = 0;
//	for (int i = vs.size() - 1; i >= 0; i--)
//	{
//		if (!used[vs[i]])rdfs(vs[i], k++);
//	}
//	return k;
//}
//
