//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class NumArray {
//public:
//	NumArray(vector<int> &nums) {
//		if (nums.empty())return;
//		dp.push_back(nums[0]);
//		for (int i = 1; i < nums.size(); ++i)
//		{
//			dp.push_back(nums[i]+dp[i-1]);
//		}
//	}
//	int sumRange(int i, int j) {
//		if (dp.empty())return 0;
//		if (i == 0)return dp[j];
//		else return dp[j] - dp[i-1];
//	}
//
//private:
//	vector<int>dp;
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>vec;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> vec[i];
//	NumArray arr(vec);
//	int l, r;
//	cin >> l >> r;
//	cout<<arr.sumRange(l, r)<<endl;
//	return 0;
//}