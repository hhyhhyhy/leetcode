////寻找第一个不见的正数
////对数组做标记，对数组设置指针,常数空间的时候，对数组元素进行交换
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int firstMissingPositive(vector<int>& nums) {
//		int nmax, nmin;
//		nmax = nmin = -1;
//		if (nums.empty())return 1;
//		int k = -1;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (nmin == -1 && nums[i]>0)nmin = nums[i];
//			if (nmax == -1 && nums[i]>0)nmax = nums[i];
//			if (nums[i] > 0 && nums[i] > nmax)nmax = nums[i];
//			if (nums[i] > 0 && nums[i] < nmin) { nmin = nums[i]; k = i; }
//		}
//		if (nmin > 1)return 1;
//
//		//进行位置交换
//		int i=0;
//		for (; i < nums.size();)
//		{
//			if (nums[i] >0 && nums[i] != (i + 1)&&nums[i]!=nums[nums[i]-1])
//			{
//				int pos = nums[i] - 1;
//				swap(nums[pos], nums[i]);
//			}
//			else
//				i++;
//		}
//		for (int i = 0; i < (nmax-nmin+1); ++i)
//		{
//			if (nums[i] != i+1)return i+1;
//		}
//		return nmax + 1;
//	}
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
//	cout<<s.firstMissingPositive(nums);
//	return 0;
//}