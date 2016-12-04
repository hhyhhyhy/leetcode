//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		vector<int>ret;
//		if (x < 0)return false;
//		long long tmp = x > 0 ? x : -x;
//		while (tmp)
//		{
//			ret.push_back(tmp % 10);
//			tmp = tmp/ 10;
//		}
//		int len = ret.size();
//		int i = 0;
//		int j = len - 1;
//		while (i < j)
//		{
//			if (ret[i] != ret[j]) { return false; }
//			i++;
//			j--;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Solution c;
//	int m;
//	cin >> m;
//	c.isPalindrome(m);
//	return 0;
//}