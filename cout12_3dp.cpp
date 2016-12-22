//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
////先形成短的再形成长的
////5 10 0001 111001 1 0 5 3
//class Solution {
//public:
//	int findMaxForm(vector<string>& strs, int m, int n) {
//		oneNum.resize(strs.size());
//		zeroNum.resize(strs.size());
//		dp.resize(m + 1);
//		for (int i = 0; i <=m; ++i)dp[i].resize(n + 1);
//
//		for (int i = 0; i < strs.size(); ++i)
//		{
//			int num0, num1;
//			num0 = num1 = 0;
//			for (int j = 0; j < strs[i].length(); ++j)
//			{
//				if (strs[i][j] == '1')num1++;
//				if (strs[i][j] == '0')num0++;
//			}
//			oneNum[i] = num1;
//			zeroNum[i] = num0;		
//		}
//		return DP(strs.size(),m,n);
//	}
//
//	int DP(int nums,int M,int N)
//	{
//		int ret = 0;
//		for (int i = 0; i < nums; ++i)
//		{
//			for (int m = M; m >=zeroNum[i]; --m)
//			{
//				for (int n = N;n>=oneNum[i]; --n)
//				{
//					dp[m][n] = max(dp[m - zeroNum[i]][n - oneNum[i]] + 1, dp[m][n]);
//				}
//			}
//		}
//		return dp[M][N];
//	}
//private:
//	vector<int> oneNum;
//	vector<int>zeroNum;
//	vector<vector<int> >dp;
//};
//
//int main()
//{
//	Solution s;
//	int l;
//	cin >> l;
//	vector<string>nums;
//	nums.resize(l);
//	for (int i = 0; i < l; ++i)cin >> nums[i];
//	int m, n;
//	cin >> m >> n;
//	cout<<s.findMaxForm(nums, m, n);
//	return 0;
//}