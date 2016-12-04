//对当前排列从后向前扫描，找到一对为升序的相邻元素，记为i和j（i < j）。如果不存在这样一对为升序的相邻元素，则所有排列均已找到，算法结束；否则，重新对当前排列从后向前扫描，找到第一个大于i的元素k，交换i和k，然后对从j开始到结束的子序列反转，
//此时得到的新排列就为下一个字典序排列。这种方式实现得到的所有排列是按字典序有序的，这也是C++ STL算法next_permutation的思想。
//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//
//class Solution {
//public:
//	void nextPermutation(vector<int>& num) {
//		if (num.size() < 2) return;
//
//		int i, k;
//		for (i = num.size() - 2; i >= 0; --i)
//			if (num[i] < num[i + 1])
//				break;
//		//若不存在子升序，则说明当前排列是最大排列，此时i = -1，下一排列即是最小排列，翻转整个序列即可
//		if (i < 0)
//		{
//			reverse(num.begin(), num.end());
//			return;
//		}
//		//找到了子升序
//		for (k = num.size() - 1; i >= 0 && k > i; --k)
//			if (num[i] < num[k])
//				break;
//		if (i >= 0)
//		{
//			//由于从末尾到k+1都是小于num[i]的交换后还是降序的所以可以取反
//			swap(num[i], num[k]);
//			reverse(num.begin() + i + 1, num.end());
//			return;
//		}
//	}
//
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>vec;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//		scanf("%d",&vec[i]);
//	s.nextPermutation(vec);
//	for (int i = 0; i < vec.size(); ++i)
//		printf("%d ", vec[i]);
//	printf("\n");
//	return 0;
//}