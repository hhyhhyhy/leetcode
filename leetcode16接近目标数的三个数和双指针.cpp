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
//	int threeSumClosest(vector<int>& nums, int target) {
//		sort(nums.begin(), nums.end());
//		int ret = 0;
//		int closet = -1;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			int mid = i + 1;
//			int end = nums.size() - 1;
//			if (i!=0&&nums[i - 1] == nums[i])
//				continue;
//			while (mid < end)
//			{
//				int sums = nums[i] + nums[mid] + nums[end];
//				if (sums < target)
//				{
//					mid++;
//					if (closet == -1) {
//						closet = target - sums;
//						ret = sums;
//					}
//					else if (target - sums < closet) {
//						closet = target - sums;
//						ret = sums;
//					}
//				}
//				else if (sums > target)
//				{
//					end--;
//					if (closet == -1) {
//						closet = sums - target;
//						ret = sums;
//					}
//					else if (sums - target < closet) {
//						closet = sums - target;
//						ret = sums;
//					}
//				}
//				else if (mid != i + 1 && nums[mid] == nums[mid - 1])
//					mid++;
//				else if (end != nums.size() - 1 && nums[end] == nums[end + 1])
//					end--;
//				else 
//				{
//					ret  = sums;
//					return ret;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int>vec;
//	int n;
//	cin >> n;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> vec[i];
//	int a;
//	cin >> a;
//	Solution s;
//	cout<<s.threeSumClosest(vec, a);
//	return 0;
//}