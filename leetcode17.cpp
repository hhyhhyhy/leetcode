//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<map>
//using namespace std;
//
//map<int, char>vmap;
//
//class Solution {
//public:
//
//	void dfs(string digists, int cur,vector<string>&ret,string str)
//	{
//		int in = digists[cur] - '0';
//		if (cur == digists.length()-1)
//		{
//			if (in == 0 || in == 1)str.push_back(in + '0');
//			else
//			{
//				//增加3个字符内容
//				string s1, s2, s3,s4;
//				s1 = addStr(str, in, 0);
//				s2 = addStr(str, in, 1);
//				s3 = addStr(str, in, 2);
//				ret.push_back(s1);
//				ret.push_back(s2);
//				ret.push_back(s3);
//				if (in == 7||in==9) {
//					s4 = addStr(str, in, 3);
//					ret.push_back(s4);
//				}
//			}
//			return;
//		}
//		
//		if (in == 0 || in == 1)
//		{
//			str.push_back(in + '0');
//			dfs(digists, cur + 1, ret, str);
//		}
//		else
//		{
//			string s1, s2, s3,s4;
//			s1 = addStr(str, in, 0);
//			s2 = addStr(str, in, 1);
//			s3 = addStr(str, in, 2);
//			dfs(digists, cur + 1, ret, s1);
//			dfs(digists, cur + 1, ret, s2);
//			dfs(digists, cur + 1, ret, s3);
//			if(in == 7 || in == 9) {
//				s4 = addStr(str, in, 3);
//				dfs(digists, cur + 1, ret, s4);
//			}
//		}
//
//	}
//	string addStr(string str, int index,int cur)
//	{
//		str.push_back(vmap[index] + cur);
//		return str;
//	}
//	vector<string> letterCombinations(string digits) {
//		for (int i = 0; i <= 9; ++i)
//		{
//			if (i == 0 || i == 1)vmap[i] = i + '0';
//			else if (i == 2) { vmap[i] = i - 2 + 'a'; }
//			else if (i == 8) { vmap[i] = vmap[i - 1 ] + 4;}
//			else
//			{
//				vmap[i] = vmap[i - 1] + 3;;
//			}
//		}
//		vector<string>ret;
//		ret.clear();
//		if (digits.empty())
//		{
//			return ret;
//		}
//		string str;
//		str.clear();
//		dfs(digits, 0, ret, str);
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution s;
//	string str;
//	cin >> str;
//	vector<string>cv = s.letterCombinations(str);
//	for (int i = 0; i < cv.size(); ++i)
//	{
//		cout << cv[i] << " ";
//	}
//	return 0;
//}