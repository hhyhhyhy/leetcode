//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	string convert(string s, int numRows) {
//		if (numRows == 1)
//		{
//			return s;
//		}
//		vector<vector<char> >vec;//对应哪一行
//		vec.resize(numRows + 1);
//		int k = 0;
//		int flag = 1;
//		for (int i = 0; i < s.size(); ++i)
//		{
//			vec[k].push_back(s[i]);
//			k = k + 1 * flag;
//			if (k == numRows||k<0){
//				k = k - 1 * flag;
//				flag = -flag;
//				k = k + 1 * flag;
//			}
//		}
//		string str;
//		for (int i = 0; i < numRows; ++i)
//		{
//			for (int j = 0; j < vec[i].size(); ++j)
//			{
//				str.push_back(vec[i][j]);
//			}
//		}
//		return str;
//	}
//};
//
//int main()
//{
//	Solution c;
//	string s;
//	int n;
//	cin >> s >> n;
//	cout << c.convert(s, n);
//	return 0;
//}