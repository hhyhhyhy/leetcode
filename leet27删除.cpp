//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) {
//		int j = nums.size();
//		int i = 0;
//		while (i<j)
//		{
//			if (nums[i] == val)
//			{
//				int v = nums[j - 1];
//				nums[j - 1] = nums[i];
//				nums[i] = v;
//				j--;
//			}
//			else
//				i++;
//		}
//		nums.resize(j);
//		return nums.size();
//	}
//};
//
//int main()
//{
//	int n;
//	vector<int>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	Solution s;
//	int val;
//	cin >> val;
//	s.removeElement(nums, val);
//	return 0;
//}