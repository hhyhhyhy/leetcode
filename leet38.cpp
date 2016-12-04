////µü´ú¹ý³Ì
//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	string countAndSay(int n) {
//		string s;
//		s.push_back('1');
//		ret = s;
//		for (int i = 0; i < n-1; ++i)
//		{
//			ret = count_and_say(ret);
//		}
//		return ret;
//	}
//
//	string count_and_say(string str)
//	{
//		char last;
//		int cnt = 0;
//		string next;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			if (i == 0) {
//				last = str[i]; cnt = 1;
//			}
//			else
//			{
//				if (str[i] == last)
//				{
//					cnt++;
//				}
//				else
//				{
//					next.push_back(cnt + '0');
//					next.push_back(last);
//					last = str[i];
//					cnt = 1;
//				}
//			}
//		}
//		next.push_back(cnt + '0');
//		next.push_back(last);
//		return next;
//	}
//private:
//	string ret;
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	cout<<s.countAndSay(n);
//	return 0;
//}