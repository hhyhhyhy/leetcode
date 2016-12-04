////找出最小变换从字符串1变换到字符串2
////可以增加，删除，替换一个字符
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//#define INF 0x3f3f3f3f
//
//class Solution {
//public:
//	int minDistance(string word1, string word2) {
//		int len1 = word1.length();
//		int len2 = word2.length();
//		if (len1 == 0)return len2;
//		if (len2 == 0)return len1;
//		dp.resize(len1 + 1);
//		for (int i = 0; i < len1+1; ++i)
//			dp[i].resize(len2 + 1);
//		for (int i = 0; i <=len1; ++i)
//			for (int j = 0; j <=len2; ++j)dp[i][j] = INF;
//		dp[0][0] = 0;
//		for (int i = 1; i <=len1; ++i)dp[i][0] = dp[i - 1][0] + 1;
//		for (int j = 1; j <=len2; ++j)dp[0][j] = dp[0][j - 1] + 1;
//
//		for (int i = 1; i <=len1; ++i)
//		{
//			for (int j = 1; j <=len2; ++j)
//			{
//				if (word1[i-1] == word2[j-1])
//				{
//					dp[i][j] = min(dp[i - 1][j - 1], dp[i][j]);
//					//可以删除或者增加
//					dp[i][j] = min(dp[i][j - 1] + 1, dp[i][j]);
//					dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j]);
//				}
//				else
//				{
//					//替换
//					dp[i][j] = min(dp[i - 1][j - 1] + 1, dp[i][j]);
//					//可以删除或者增加
//					dp[i][j] = min(dp[i][j - 1] + 1, dp[i][j]);
//					dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j]);
//				}
//			}
//		}
//		return dp[len1][len2];
//	}
//private:
//	vector<vector<int> >dp;//表示1-i以及1-j子字符串修改后能相等的最小改变次数
//};
//
//
//int main()
//{
//	string str1, str2;
//	cin >> str1 >> str2;
//	Solution s;
//	cout<<s.minDistance(str1, str2);
//	return 0;
//}