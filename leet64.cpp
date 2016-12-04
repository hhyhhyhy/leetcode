////给定一个起始点和终点求在网格上的最短路径
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int minPathSum(vector<vector<int>>& grid) {
//		dp.resize(grid.size());
//		for (int i = 0; i < grid.size(); ++i)
//			dp[i].resize(grid[i].size());
//		int m = grid.size();
//		int n = grid[0].size();
//		for (int i = 0; i < m; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//				dp[i][j] = -1;
//		}
//		dp[0][0] = grid[0][0];
//		for (int i = 0; i < m; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (j > 0 && dp[i][j - 1] >= 0) { 
//					if (dp[i][j] == -1)dp[i][j] = dp[i][j - 1] + grid[i][j]; 
//					else dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]); 
//				}
//				if (i > 0 && dp[i - 1][j] >= 0)
//				{
//					if (dp[i][j] == -1)dp[i][j] = dp[i-1][j] + grid[i][j];
//					else dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
//				}
//			}
//		}
//		return dp[m - 1][n - 1];
//	}
//private:
//	vector<vector<int> >dp;
//};
//
//int main()
//{
//	Solution s;
//	return 0;
//}