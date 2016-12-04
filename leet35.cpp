//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int L = 0;
//		int R = nums.size()-1;
//		while (L <= R)
//		{
//			int mid = (L + R) / 2;
//			if (nums[mid] > target)R = mid-1;
//			else if(nums[mid]<target)
//				L = mid + 1;
//			else
//			{
//				L = mid; break;
//			}
//		}
//		return L;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)cin >> nums[i];
//	int target;
//	cin >> target;
//	cout<<s.searchInsert(nums, target);
//	return 0;
//}