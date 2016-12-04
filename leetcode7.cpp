//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<limits.h>
//using namespace std;
//
//
//class Solution {
//public:
//	int reverse(int x) {
//		int flag = x > 0 ? 1 : -1;
//		long long tmp = x;
//		tmp = tmp > 0 ? tmp : -tmp;
//		long long r = 0;
//		while (tmp)
//		{
//			r = r * 10 + tmp % 10;
//			tmp = tmp / 10;
//		}
//		if (r > INT_MAX || (flag*r < INT_MIN))return 0;
//		
//		return r*flag;
//	}
//};
//
//
//int main()
//{
//	Solution c;
//	c.reverse(-123);
//	return 0;
//}