////给定一些区间，找出最小的区间需要移除使得没有重叠
////注意终点和起点重合的时候并没有是重叠的
//
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Interval {
//	int start;
//	int end;
//	Interval() : start(0), end(0) {}
//	Interval(int s, int e) : start(s), end(e) {}
//	
//};
//int cmp(const Interval&v1, const Interval&v2)
//{
//	return v1.end < v2.end;
//}
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<Interval>& intervals) {
//		//对立问题就是最长没有重叠的区间
//		sort(intervals.begin(), intervals.end(),cmp);
//		int cnt = 0;
//		int last = -1;
//		for (int i = 0; i < intervals.size(); ++i)
//		{
//			if (i == 0) { cnt++; last = i; }
//			else if(intervals[i].start >= intervals[last].end)
//			{
//				cnt++; last = i; 
//			}
//		}
//		return intervals.size() - cnt;
//	}
//
//};
//
//int main()
//{
//	return 0;
//}