//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//#define MIN(a,b) (a<b?a:b)
//
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		int i = 0;
//		map<int, char>vmap;
//		int k = -1;
//		if (strs.empty())return "";
//		if (strs.size() == 1)
//		{
//			return strs[0];
//		}
//		string prestr = strs[0];
//		for (int i = 1; i < strs.size(); ++i)
//		{
//			int k = 0;
//			for (int j = 0; j < strs[i].length()&&j<prestr.length(); ++j)
//			{
//				if (strs[i][j] == prestr[j])k++;
//				else break;
//			}
//			if (k > 0)
//			{
//				prestr.assign(strs[i].begin(), strs[i].begin()+k);
//			}
//			else return "";
//		}
//		return prestr;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<string>sr;
//	cin >> n;
//	sr.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> sr[i];
//	}
//	cout<<s.longestCommonPrefix(sr);
//	return 0;
//}