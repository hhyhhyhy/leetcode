//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct P
//{
//	double x;
//	double y;
//	P()
//	{}
//	P(double x,double y):x(x),y(y){}
//	P operator+(P p)
//	{
//		return P(x+p.x, y+p.y);
//	}
//	P operator-(P p)
//	{
//		return P(x - p.x, y - p.y);
//	}
//	double dot(P p)
//	{
//		return x*p.x + y*p.y;
//	}
//	double det(P p)
//	{
//		return x*p.y - y*p.x;
//	}
//
//};
//
//bool cmp_x(const P&p, const P&q)
//{
//	if (p.x != q.x)return p.x < q.x;
//	return p.y < q.y;
//}
//
////求解凸包
//vector<P> convex_hull(vector<P>&ps, int n)
//{
//	sort(ps.begin(), ps.end(), cmp_x);
//	int k = 0;
//	vector<P>qs(n * 2);
//	//构造凸包的下侧
//	for (int i = 0; i < n; ++i)
//	{
//		while (k > 1 && (qs[k - 1] - qs[k - 2]).det(ps[i] - qs[k - 1]) <= 0)k--;
//		qs[k++] = ps[i];
//	}
//	//构造凸包的上策
//	for (int i = n - 2, t = k; i >= 0; i--)
//	{
//		while (k > t && (qs[k - 1] - qs[k - 2]).det(ps[i] - qs[k - 1]) <= 0)k--;
//		qs[k++] = ps[i];
//	}
//	qs.resize(k - 1);
//	return qs;
//}