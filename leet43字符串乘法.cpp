//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string multiply(string num1, string num2) {
//		vector<int>vret;
//		vret.resize(num1.size() + num2.size() + 10);
//		reverse(num1.begin(), num1.end());
//		reverse(num2.begin(), num2.end());
//		for (int i = 0; i < num1.length();i++)
//		{
//			for (int j = 0; j < num2.length(); ++j)
//			{
//				int l1 = num1[i] - '0';
//				int l2 = num2[j] - '0';
//				vret[i + j] += l1*l2;
//				vret[i + j + 1] += vret[i + j] / 10;
//				vret[i + j] %= 10;
//			}
//		}
//		//进行进制
//		string ret;
//		int len = num1.length() + num2.length();
//		while (len>=0&&!vret[len])len--;
//		if (len == -1)len = 0;
//		ret.resize(len + 1);
//		for (int i = len; i >= 0; i--)ret[len - i] = vret[i] +'0';
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution s;
//	string num1, num2;
//	cin >> num1 >> num2;
//	cout<<s.multiply(num1, num2);
//	return 0;
//}