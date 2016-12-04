////给定一个数组。但是数组可能按照某个主元打乱了。但是我们要查找某一个元素的具体位置
////算法步骤肯定是在确定主元后。才能进行查找的
////而且旋转的主元可以有很多不一定只有一个
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		//找到变小的点
//		if (nums.size() == 0)return -1;
//		return binsearch(nums, 0, nums.size() - 1, target);
//	}
//	int binsearch(vector<int>&nums, int L, int R, int target)
//	{
//		int mid = (L + R) / 2;
//		if (L > R)return -1;
//		if (nums[L] == target)return L;
//		if (nums[R] == target)return R;
//		if (nums[mid] == target)return mid;
//
//		if (nums[L] < nums[R])
//		{
//			if (target > nums[R] || target < nums[L])return -1;
//			else if (target < nums[mid])
//			{
//				return binsearch(nums, L+1, mid - 1, target);
//			}
//			else
//				return binsearch(nums, mid + 1, R-1, target);
//		}
//		else if (nums[L] < nums[mid])//说明Mid还在第一段
//		{
//			if (target>nums[L]&&target < nums[mid])return binsearch(nums, L+1, mid - 1, target);
//			else return binsearch(nums, mid + 1, R-1, target);
//		}
//		else
//		{
//			if (target > nums[mid] && target < nums[R])return binsearch(nums, mid + 1, R-1, target);
//			else
//				return binsearch(nums, L+1, mid - 1, target);//左边
//		}
//	}
//};
//
//
//
//int main()
//{
//	int n;
//	vector<int>vec;
//	cin >> n;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)cin >> vec[i];
//	int tar;
//	cin >> tar;
//	Solution s;
//	cout<<s.search(vec, tar);
//	return 0;
//}
//
