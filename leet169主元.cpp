//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		stack<int>stk;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (stk.empty())stk.push(nums[i]);
//			else
//			{
//				if (stk.top() == nums[i])stk.push(nums[i]);
//				else stk.pop();
//			}
//		}
//		int ret = 0;
//		if (!stk.empty())ret = stk.top();
//		int times = 0;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			if (nums[i] == ret)times++;
//		}
//		if (times > nums.size() / 2)return ret;
//		return -1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	return 0;
//}