//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//#define MIN(a,b)  (a<b?a:b)
//#define INF 0x3f3f3f3f
//int minhei[100001];
//int minCnt[100001];
//
//class Solution {
//public:
//	int largestRectangleArea(vector<int>& heights) {
//		int front = 0;
//		int end = heights.size() - 1;
//		memset(minCnt, 0, sizeof(minCnt));
//		for (int i = 0; i < heights.size(); ++i)
//			minhei[i] = INF;
//		minhei[0] = heights[0];
//		for (int i = 1; i < heights.size(); ++i)
//		{
//			if (heights[i] == minhei[i - 1]) { minCnt[i]++; }
//			else minhei[i] = MIN(heights[i], minhei[i-1]);
//		}
//
//		while (front < end)
//		{
//			//先求出区间内的最小值
//			int minus;
//		}
//
//	}
//};
//
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>hei;
//	hei.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> hei[i];
//	cout<<s.largestRectangleArea(hei);
//
//	return 0;
//}