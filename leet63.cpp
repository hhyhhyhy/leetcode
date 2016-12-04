////在刚才题的基础上加入障碍，求结果
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//		memset(dp, 0, sizeof(dp));
//		dp[0][0] = 1;
//		int m = obstacleGrid.size();
//		int n = obstacleGrid[0].size();
//		for (int i = 0; i < m; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (obstacleGrid[i][j])dp[i][j] = 0;
//				else
//				{
//					if (dp[i][j])
//					{
//						if (j < n - 1)dp[i][j+1] += dp[i][j];
//						if (i < m - 1)dp[i + 1][j] += dp[i][j];
//					}
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
//	int m;
//	int n;
//	cin >> m >> n;
//	vector<vector<int>>obs;
//	obs.resize(m);
//	for (int j = 0; j < m; ++j)obs[j].resize(n);
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//			cin >> obs[i][j];
//	}
//	cout<<s.uniquePathsWithObstacles(obs);
//	return 0;
//}
