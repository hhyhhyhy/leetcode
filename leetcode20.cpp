//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char>que;
//		int len = s.length();
//		if (s.empty())return true;
//		for (int i = 0; i < len; ++i)
//		{
//			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//				que.push(s[i]);
//			else
//			{
//				char f;
//				bool fla = false;
//				switch (s[i])
//				{
//				case ')':
//					while (!que.empty())
//					{
//						f = que.top();
//						que.pop();
//						if (f == '(') {
//							fla = true; break;
//						}
//						else break;
//					}
//					break;
//				case ']':
//					while (!que.empty())
//					{
//						f = que.top();
//						que.pop();
//						if (f == '[') {
//							fla = true; break;
//						}
//						else break;
//					}
//					break;
//				case '}':
//					while (!que.empty())
//					{
//						f = que.top();
//						que.pop();
//						if (f == '{') {
//							fla = true; break;
//						}
//						else break;
//					}
//					break;
//				}
//				if (fla == false)return false;
//			}
//		}
//		if (!que.empty())return false;
//		return true;
//	}
//};
//
//
//
//int main()
//{
//	Solution s;
//	string str;
//	cin >> str;
//	cout<<s.isValid(str);
//	return 0;
//}