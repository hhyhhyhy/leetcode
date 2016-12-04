////h就是当前用户的高度，k就是在当前用户之前比该用户高的人数
////有两种情况h1<h2 k1<k2不能交换  h1<h2 k1>k2需要交换
////等于的时候h1==h2 k1<k2
///类似插入排序每次插入的位置都是对于前面已经排好序的序列的最佳位置
////6 7 0 4 4 7 1 5 0	
////6 1 5 2
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////重新安排位置使得个数关键字有效
//
//int cmp(pair<int, int>&p1, pair<int, int>&p2)
//{
//	return (p1.second< p2.second||(p1.second==p2.second&&p1.first <= p2.first));
//}
//
//class Solution {
//public:
//	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
//		vector<pair<int, int>>v2;
//		vector<pair<int, int>>v1;
//		v1 = people;
//		sort(v1.begin(), v1.end(),cmp);//高度
//		//进行处理
//		for (int i = 0; i < v1.size(); ++i)
//		{
//			int nums = 0;
//			int j = 0;
//			while(j<i)
//			{
//				if (nums > v1[i].second)break;
//				else if (nums == v1[i].second)
//				{
//					if (v1[i].first <= v1[j].first)break;
//				}
//				else if (v1[j].first >= v1[i].first)nums++;
//				j++;
//			}
//			if (j < i) 
//			{ 
//				pair<int,int>v = v1[i];
//				for (int k = i; k > j; k--)
//				{
//					v1[k] = v1[k - 1];
//				}
//				v1[j] = v;
//			}
//		}
//		return v1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<pair<int, int>>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		int p, k;
//		cin >> p >> k;
//		nums[i] = make_pair(p, k);
//	}
//	s.reconstructQueue(nums);
//	return 0;
//}