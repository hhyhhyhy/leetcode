//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> permuteUnique(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		used.resize(nums.size());
//		vector<int>path;
//		path.resize(nums.size());
//		dp(0, nums, path);
//		return ret;
//	}
//	void dp(int cur,vector<int>&nums,vector<int>&path)
//	{
//		if (cur == nums.size())
//		{
//			ret.push_back(path);
//		}
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (!used[i])
//			{
//				if (i > 0 && nums[i - 1] == nums[i] && !used[i-1])continue;
//				used[i] = 1;
//				path[cur] = nums[i];
//				dp(cur + 1, nums,path);
//				used[i] = 0;
//			}
//		}
//	}
//	
//private:
//	vector<vector<int> >ret;
//	vector<int>used;
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
//	s.permuteUnique(nums);
//
//	return 0;
//}
