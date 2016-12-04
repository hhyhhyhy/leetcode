//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<set>
//using namespace std;
//#define INF 0x3f3f3f3f
//
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int j = nums.size();
//		int len = nums.size();
//		set<int>vset;
//		vector<int>temp;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (!vset.count(nums[i]))
//			{
//				vset.insert(nums[i]);
//				temp.push_back(nums[i]);
//			}
//		}
//		nums = temp;
//		return temp.size();
//	}
//};
//
//
//int main()
//{
//	int n;
//	Solution s;
//	cin >> n;
//	vector<int>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	s.removeDuplicates(nums);
//	return 0;
//}