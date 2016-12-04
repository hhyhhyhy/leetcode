//三个数的和是固定起点
//四个数的和是固定首位两端
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//int binarySearch(vector<int>&nums,int target,int L,int R)
//{
//	while (L <=R)
//	{
//		int mid = (L + R) / 2;
//		if(nums[mid] == target)return mid;
//		else if (nums[mid] < target)L = mid + 1;
//		else
//			R = mid-1;
//	}
//	return -1;
//}
//
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target) {
//		int n = nums.size();
//		vector<vector<int> > vecret;
//		sort(nums.begin(), nums.end());
//
//		for (int i = 0; i < n; ++i)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])continue;
//			for (int j = n - 1; j > i; --j)
//			{
//				if (j < n - 1 && nums[j] == nums[j + 1])continue;
//				int m = i + 1;
//				int k = j-1;
//				while (m<k)
//				{
//					int sums = nums[i] + nums[m] + nums[j] + nums[k];
//					if (sums < target)
//					{
//						m++;
//					}
//					else if (sums>target)
//					{
//						k--;
//					}
//					else if (m != (i + 1)&&nums[m] == nums[m - 1])++m;
//					else if (k != j - 1 && nums[k] == nums[k + 1])--k;
//					else
//					{
//						vector<int>vec;
//						vec.push_back(nums[i]);
//						vec.push_back(nums[m]);
//						vec.push_back(nums[k]);
//						vec.push_back(nums[j]);
//						vecret.push_back(vec);
//						++m;
//						++k;
//					}
//				}
//			}
//		}
//		return vecret;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	int tar;
//	cin >> tar;
//	vector<int>vec;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> vec[i];
//	}
//	vector<vector<int> >par;
//	par = s.fourSum(vec, tar);
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cout << par[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}