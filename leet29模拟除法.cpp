//// 这个我们就得使用位运算。我们知道任何一个整数可以表示成以2的幂为底的一组基的线性组合，即num=a_0*2^0+a_1*2^1+a_2*2^2+...+a_n*2^n。
////相当于每次用除数去消去每个位的值
//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//	public:
//		int divide(int dividend, int divisor) {	
//		
//			long long a = abs((long long)dividend);
//			long long b = abs((long long)divisor);
//			if (b == 0)return INT_MAX;
//			long long res = 0;
//			while (a >= b)
//			{
//				long long c = b;
//				for (int i = 0; a >= c; i++, c <<= 1)
//				{
//					a -= c;
//					res += 1 << i;//商
//				}
//			}
//
//			if (dividend < 0 && divisor>0)res = -res;
//			if (dividend > 0 && divisor < 0)res = -res;
//
//			if (res >= INT_MAX)res = INT_MAX;
//			else if (res <= INT_MIN)res = INT_MIN;
//			return res;
//		}
//};
//
//int main()
//{
//	Solution s;
//	int n, m;
//	cin >> n >> m;
//	printf("%d\n",s.divide(n, m));
//	return 0;
//}