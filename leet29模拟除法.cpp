//// ������Ǿ͵�ʹ��λ���㡣����֪���κ�һ���������Ա�ʾ����2����Ϊ�׵�һ�����������ϣ���num=a_0*2^0+a_1*2^1+a_2*2^2+...+a_n*2^n��
////�൱��ÿ���ó���ȥ��ȥÿ��λ��ֵ
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
//					res += 1 << i;//��
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