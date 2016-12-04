////是否可以分成两个数组。两个数组的和相等
////我们将所有数据分堆。有可能在在坐堆。也有可能在右堆左堆为0，右堆为1
////说白了就是选或者不选相当于0-1背包问题
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	bool canPartition(vector<int>& nums) {
//		int sums = 0;
//		int W = 20001;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			sums += nums[i];
//		}
//		memset(dp, 0, sizeof(dp));
//		bool flag = false;
//		dp[0] = 1;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			for (int j = W; j >= nums[i]; j--)
//			{
//				if (dp[j - nums[i]])dp[j] |= dp[j - nums[i]];
//				if (dp[j] && (sums - j == j))
//				{
//					flag = true; 
//					break; 
//				}
//			}
//			if (flag)break;
//		}
//		return flag;
//
//	}
//	//由于每个数字不会超过100,个数不会超过200
//private:
//	int dp[20005];//背包的和
//};
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)cin >> nums[i];
//	cout<<s.canPartition(nums);
//	return 0;
//}