//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//struct Interval {
//    int start;
//    int end;
//    Interval() : start(0), end(0) {}
//    Interval(int s, int e) : start(s), end(e) {}
//};
//
//int cmp(struct Interval lhs, struct Interval rhs)
//{
//	return (lhs.start < rhs.start)||(lhs.start==rhs.start&&lhs.end<rhs.end);
//}
//
//class Solution {
//public:
//	vector<Interval> merge(vector<Interval>& intervals) {
//		int curBeg;
//		int curEnd;
//		vector<Interval>ret;
//		if (intervals.empty())return ret;
//		sort(intervals.begin(), intervals.end(), cmp);
//		curBeg = intervals[0].start;
//		curEnd = intervals[0].end;
//		for (int i = 1; i < intervals.size(); ++i)
//		{
//			if (intervals[i].start > curEnd)
//			{
//				//加入结果集合
//				Interval s = {curBeg,curEnd};
//				ret.push_back(s);
//				curBeg = intervals[i].start;
//				curEnd = intervals[i].end;
//			}
//			else
//			{
//				if (curEnd < intervals[i].end)
//					curEnd = intervals[i].end;
//			}
//		}
//		Interval s = { curBeg,curEnd };
//		ret.push_back(s);
//		return ret;
//	}
//};
//
//int main()
//{
//    Solution s;
//	int n;
//	cin >> n;
//	vector<Interval>num;
//	num.resize(n);
//	Interval s1;
//	for (int i = 0; i < n; ++i)
//	{
//		int l, r;
//		cin >> l >> r;
//		s1.start = l;
//		s1.end = r;
//		num[i] = s1;
//	}
//	vector<Interval>ret = s.merge(num);
//	return 0;
//}