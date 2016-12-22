//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//
//bool isIpv4(string str)
//{
//	int cur = 0;
//	int curEnd = 0;
//	int times = 0;
//	while (cur < str.length())
//	{
//		if (times == 4)return false;
//		int index = str.find('.', cur);
//		if (index == -1)curEnd = str.length();
//		else curEnd = index;
//		int nums = 0;
//		for (int j = cur; j <curEnd; ++j)
//		{
//			nums = nums*10 + (str[j] - '0');
//		}
//		if(nums!=0&& str[cur] == '0')return false;
//		if (nums == 0 && (curEnd - cur) != 1)return false;
//		if (nums < 0 || nums >= 256)return false;
//		cur = curEnd+1;
//		times++;
//	}
//	if (str[str.length() - 1] == '.')return false;
//	if (times < 4)return false;
//	return true;
//}
//
//bool isIpv6(string str)
//{
//	int cur = 0;
//	int curEnd = 0;
//	int times = 0;
//	while (cur < str.length())
//	{
//		if (times == 8)return false;
//		int index = str.find(':', cur);
//		if (index == -1)curEnd = str.length();
//		else curEnd = index;
//		for (int j = cur; j <curEnd; ++j)
//		{
//			if (str[j] >= 'a'&&str[j] <= 'f')continue;
//			if (str[j] >= 'A'&&str[j] <= 'F')continue;
//			if (str[j] >= '0'&&str[j] <= '9')continue;
//			else return false;
//		}
//		if (curEnd - cur >= 5)return false;
//		if (curEnd - cur < 1)return false;
//		cur = curEnd + 1;
//		times++;
//	}
//	if (str[str.length() - 1] == ':')return false;
//	if (times < 8)return false;
//	return true;
//}
//class Solution {
//public:
//	string validIPAddress(string IP) {
//		if (isIpv4(IP))return "IPv4";
//		if (isIpv6(IP))return "IPv6";
//		return "Neither";
//	}
//};
//
//int main()
//{
//	Solution s;
//	string str;
//	cin >> str;
//	cout << s.validIPAddress(str);
//	return 0;
//}