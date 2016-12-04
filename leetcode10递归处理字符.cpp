//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		int k1, k2;
//		k1 = k2 = 0;
//		int len1 = s.length();;
//		int len2 = p.length();
//		if (bMatch(0, s, 0, p))return true;
//		return false;
//	}
//
//	bool bMatch(int s1, string s, int s2, string p)
//	{
//		if (s1 == s.length() && s2 == p.length())return true;
//
//		if (s2 == p.length())return false;
//
//
//		if (s[s1] == p[s2])//相等的时候
//		{
//			if (p[s2+1] == '*')
//			{
//				if (bMatch(s1, s, s2 + 2, p))return true;
//				for (int i = s1; i < s.length(); ++i)
//				{
//					if (s[i] != s[s1])break;
//					if (bMatch(i+1, s, s2 + 2, p))return true;
//				}
//				return false;
//			}
//			if (bMatch(s1 + 1, s, s2 + 1, p))return true;
//			return false;
//		}
//		else//不相等的时候
//		{
//			if (p[s2] == '.')
//			{
//				if (p[s2 + 1] == '*')
//				{
//					if (bMatch(s1, s, s2 + 2, p))return true;
//					for (int i = s1; i < s.length(); ++i)
//					{
//						if (bMatch(i + 1, s, s2 + 2, p))return true;
//					}
//					return false;
//				}
//				if (bMatch(s1 + 1, s, s2 + 1, p))return true;
//				return false;
//			}
//			else
//			{
//				if(p[s2+1]=='*')
//				{
//					if (bMatch(s1, s, s2 + 2, p))return true;
//					return false;
//				}
//				return false;
//			}
//
//		}
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		cout << s.isMatch(str1, str2) << endl;
//	}
//
//	return 0;
//}
//
