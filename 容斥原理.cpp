////����a1,a2...am��1��n�����������ܱ�a
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
//		//��ʾ���ϵĽ���
//		for (int j = i; j != 0; j >>= 1)num += j & 1;
//		ll lcm = 1;
//		//�����������С������
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