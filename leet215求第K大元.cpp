////类似题有找两个有序数列的第K大元。这题是寻找无序序列的第K大元
////对于分治的方法，由于是无序的无法直接进行子问题划分。那么可以利用
////快排的思想进行划分
//
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int findKthLargest(vector<int>& nums, int k) {
//		return findKth(nums, 0, nums.size() - 1, k);
//	}
//	int partion(vector<int>&nums,int L,int R)
//	{
//		int left = L;
//		int right = R;
//		int key = nums[left];
//		//从大到小排序
//		while (left < right)
//		{
//			while (left<right&&nums[right]<key)right--;
//			nums[left] = nums[right];
//			while (left < right&&nums[left] >= key)left++;
//			nums[right] = nums[left];
//		}
//		nums[left] = key;
//		return left;
//	}
//	int findKth(vector<int>&nums, int L, int R, int k)
//	{
//		if (L < R)
//		{
//			int p = partion(nums, L, R);
//			if (p == k - 1)return nums[k - 1];
//			else if (p>k - 1)return findKth(nums, L, p - 1, k);
//          //为什么还是k呢因为数组并没有折断返回的仍然是0到N
//			else return findKth(nums, p + 1, R, k);
//		}
//		else
//			return nums[L];
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
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	int k;
//	cin >> k;
//	cout<<s.findKthLargest(nums,k );
//	return 0;
//}