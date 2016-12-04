//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		dp.resize(nums.size());
//		dp[0] = nums[0];
//		int maxSub = nums[0];
//		for (int i = 1; i < nums.size(); ++i)
//		{
//			if (dp[i-1] < 0)dp[i] = nums[i];
//			else
//			{
//				dp[i] = dp[i - 1] + nums[i];
//			}
//			if (dp[i] > maxSub)maxSub = dp[i];
//		}
//		return maxSub;
//	}
//private:
//	vector<int>dp;//以i结尾的最大部分和
//};
//
//int main()
//{
//
//	return 0;
//}