//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		int len = s.size();
//		int ret = 0;
//		int L, R;
//		for (int i = 0; i<len; ++i)
//		{
//			int st, e;
//			st = e = i;
//			while (s[i] == s[e + 1])e++;//将相同的处理掉
//			i = e;
//			while (st!=0&&s[st - 1] == s[e + 1]) {
//				st--;
//				e++;
//			}
//			int r = e - st + 1;
//			if (r>ret)
//			{
//				ret = r;
//				L = st;
//				R = e;
//			}
//		}
//		string str;
//		char ch[1001];
//		int k = 0;
//		for (int i = L; i <= R; ++i)
//			ch[k++] = s[i];
//		ch[k] = '\0';
//		str.clear();
//		str.assign(ch, k);
//		return str;
//	}
//};
//
//int main()
//{
//
//	Solution c;
//	string str = "abccba";
//	cout << c.longestPalindrome(str);
//	return 0;
//}