////给定a1,a2...am求1到n中整数至少能被a
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//typedef long long ll;
//int n, m;
//void solve()
//{
//	ll res = 0;
//	for (int i = 1; i < (1 << m); ++i)
//	{
//		int num = 0;
//		//表示集合的交集
//		for (int j = i; j != 0; j >>= 1)num += j & 1;
//		ll lcm = 1;
//		//求出交集的最小公倍数
//		for (int j = 0; j < m; ++j)
//		{
//			if (i >> j & 1)
//			{
//				lcm = lcm / gcd(lcm, a[j])*a[j];
//				if (lcm > n)break;
//			}
//		}
//		if (num % 2 == 0)res -= n / lcm;
//		else res += n / lcm;
//	}
//	printf("%d\n", res);
//}