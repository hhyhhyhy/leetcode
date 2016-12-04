////可以从下或者往右走，求有多少可能的不同路径
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//
//using namespace std;
//
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//		memset(dp, 0, sizeof(dp));
//		dp[0][0] = 1;
//		for (int i = 0; i < m; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (dp[i][j])
//				{
//					if (j < n - 1)dp[i][j+1] += dp[i][j];
//					if (i < m - 1)dp[i + 1][j] += dp[i][j];
//				}
//			}
//		}
//		return dp[m - 1][n - 1];
//	}
//private:
//	int dp[110][110];
//};
//
//int main()
//{
//	Solution s;
//	int m, n;
//	cin >> m >> n;
//	cout<<s.uniquePaths(m, n);
//	return 0;
//}