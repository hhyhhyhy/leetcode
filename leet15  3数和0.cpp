//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//using namespace std;
//
//int minofThree(int a, int b, int c)
//{
//	return (a < c ? a : c) < b ? (a < c ? a : c) : b;
//}
//int maxofThree(int a, int b, int c)
//{
//	return (a > c ? a : c) > b ? (a > c ? a : c) : b;
//}
//class Solution
//{
//public:
//	vector<vector<int>> threeSum(vector<int>& num) {
//		vector<vector<int> > ret;
//
//		if (num.size() == 0) return ret;
//
//		sort(num.begin(), num.end());
//
//		for (vector<int>::const_iterator it = num.begin();
//		it != num.end();
//			++it)
//		{
//			 Dedup
//			if (it != num.begin() && *it == *(it - 1))
//			{
//				continue;
//			}
//
//			 Dedup, front = it + 1
//			vector<int>::const_iterator front = it + 1;
//			vector<int>::const_iterator back = num.end() - 1;
//
//			while (front < back)
//			{
//				const int sum = *it + *front + *back;
//
//				if (sum > 0)
//				{
//					--back;
//				}
//				else if (sum < 0)
//				{
//					++front;
//				}
//				 Dedup
//				else if (front != it + 1 && *front == *(front - 1))
//				{
//					++front;
//				}
//				 Dedup
//				else if (back != num.end() - 1 && *back == *(back + 1))
//				{
//					--back;
//				}
//				else
//				{
//					vector<int> result;
//
//					 Already sorted.
//					result.push_back(*it);
//					result.push_back(*front);
//					result.push_back(*back);
//
//					ret.push_back(result);
//
//					++front;
//					--back;
//				}
//			}
//		}
//
//		return result;
//	}
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>rs;
//	rs.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> rs[i];
//	Solution cs;
//	vector<vector<int> > ret =cs.threeSum(rs);
//	for (int i = 0; i < ret.size(); ++i)
//	{
//		for (int j = 0; j < ret[i].size(); ++j)
//		{
//			cout << ret[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}