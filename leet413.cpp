////至少三个，同时相邻两个的差距是一样的
////从给定的数组中找出连续的子序列。使得子序列是满足要求的
////思想：理论上是区间dp
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int numberOfArithmeticSlices(vector<int>& A) {
//		int len = A.size();
//		dp.resize(len + 1);
//		int ret = 0;
//		for (int l = 3; l <= len; ++l)
//		{
//			for (int i = 0; i+l-1 < len; ++i)
//			{
//				int j = i + l - 1;
//				if(j-i==2&&A[j]-A[j-1]==A[j-1]-A[i])
//				{
//					dp[j] = 1;
//				}
//				else if (A[j] - A[j-1]==A[j-1]-A[j-2])
//				{
//					dp[j] += (dp[j-1]>=1);
//				}
//			}
//		}
//		for (int i = 0; i < len; ++i)ret += dp[i];
//		//printf("%d\n", ret);
//		return ret;
//	}
//private:
//    //int dp[800][800];//以i结尾的Arith有多少个
//	vector<int>dp;
//};
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> v[i];
//	cout<<s.numberOfArithmeticSlices(v);
//	return 0;
//}