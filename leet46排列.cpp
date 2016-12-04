//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> permute(vector<int>& nums) {
//		used.resize(nums.size());
//		vector<int>path;
//		path.resize(nums.size());
//		dfs(nums, 0, path);
//		return ret;
//	}
//	void dfs(vector<int>&nums,int step,vector<int>&path)
//	{
//		if (step == used.size())
//		{
//			ret.push_back(path);
//			return;
//		}
//		for (int i = 0; i < used.size(); ++i)
//		{
//			if (!used[i])
//			{
//				used[i] = 1;
//				path[step] = nums[i];
//				dfs(nums, step + 1, path);
//				used[i] = 0;
//			}
//		}
//	}
//private:
//	vector<int>used;
//	vector<vector<int>>ret;
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
//	s.permute(nums);
//	return 0;
//}