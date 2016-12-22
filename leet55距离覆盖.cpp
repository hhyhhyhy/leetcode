//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		int cur = nums[0];
//		int farest = cur;
//		//每次更新成当前可以走到的最远位置
//		for (int j = 0; j < nums.size(); ++j)
//		{
//			if (cur >= nums.size() - 1)break;
//			if (j <cur)
//			{
//				farest = max(farest, nums[j] + j);
//			}
//			else if (j == cur)
//			{
//				farest = max(farest, nums[j] + j);
//				cur = farest;
//			}
//		}
//		if (cur >= nums.size() - 1)return true;
//		return false;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	vector<int>num;
//	int n;
//	cin >> n;
//	num.resize(n);
//	for (int i = 0; i < n; ++i)cin >> num[i];
//	cout<<s.canJump(num);
//	return 0;
//}