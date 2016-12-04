//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		map<int, int>vmap;
//		vector<int>ret;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			int tar = target - nums[i];
//			vmap[tar] = i+1;
//		}
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (vmap[nums[i]]>0&&vmap[nums[i]]!=(i+1))
//			{
//				int ls = min(vmap[nums[i]] - 1, i);
//				int ms = max(vmap[nums[i]] - 1, i);
//				ret.push_back(ls);
//				ret.push_back(ms);
//				break;
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<int>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	int tar;
//	cin >> tar;
//	s.twoSum(nums, tar);
//	return 0;
//}