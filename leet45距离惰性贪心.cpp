////其实属于一种惰性算法
////距离贪心
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////动态规划超时 O(n2）所以需要线性解决
////考虑贪心算法：
////当前位置如果小于目标位置那么移动到经过的地点使得自己能最远的位置
////相当于一个如果当前位置可以到达下一个位置那么不用更新
//
//class Solution {
//public:
//	int jump(vector<int>& nums) {
//		int pos = 0;
//		int step = 0;
//		int curmax = 0;
//		int n = nums.size();
//		for (int i = 0; i < n; ++i)
//		{
//			//若当前位置比实际位置大的话更新下次可以移动到的最远距离
//			if (pos < i)
//			{
//				step++;
//				pos = curmax;
//			}
//			curmax = max(curmax, i + nums[i]);
//		}
//
//		return step;
//	}
//private:
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<int>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	cout<<s.jump(nums);
//	return 0;
//}