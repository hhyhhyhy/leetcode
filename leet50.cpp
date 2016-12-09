//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	double myPow(double x, int n) {
//		double ret;
//		if (x == 0.0)return  0.0;
//		if (n == 0 && x != 0.0)return 1.0;
//		if (x == 1.0)return 1.0;
//		if (x == -1.0)return (n & 1) ? -1.0 : 1.0;
//		long long m = n;
//		if (m <= INT_MIN)return 0.0;
//		if (n < 0)
//		{
//			ret = pow(x, -n);
//			ret = 1 / ret;
//		}
//		else
//			ret = pow(x, n);
//		return ret;
//	}
//	double pow(double x, int n)
//	{
//		//if (n == 0)return 1.0;
//
//		//double l1 = pow(x, n / 2);
//		//double ret = l1*l1;
//		//if (n % 2 == 1)ret *= x;
//		//return ret;
//		double ret = 1;
//		while (n > 0)
//		{
//			if (n & 1)ret *= x;
//			x *= x;
//			n >>= 1;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	double x;
//	int n;
//	cin >> x >> n;
//	Solution s;
//	cout<<s.myPow(x, n);
//}
