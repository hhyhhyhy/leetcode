////��תK��λ�����ڵ�i��λ�ú�(i+k*t)(mod n)����ɫ����ͬ�Ŀ��Կ�����һ���켣���켣�ĸ���
////����ÿһ���켣�ϸ���Ϊk*t=0(Mod n)���Ը�������t = n/gcd(k,n)
////����ÿһ���켣�ĸ�����ͬ�����Ը�������n/t = gcd(k,n)��������n�ܴ��������0-n-1˳��ö���޷����
////����gcd(k,n)������ֵ����d��n��Լ����ͳ������gcd(k,n)=d�ĸ�����Ȼk��d�ı�������k = dt����d =gcd(k,n) = gcd(dt,n) = d*gcd(t,n/d)���gcd(t,n/d)=1
////����������t�ĸ�������ŷ��������(n/d)���Եõ���ʽ1/n sigma(m^d��(n/d))
////�����Լ�������Ϊd��������Ҳ��n�������ӣ�������������n����������ô��������������logn
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<map>
//using namespace std;
//
//const int MOD = 1000000007;
//typedef long long ll;
//
//int n, m;
//void solve()
//{
//	map<int, int>primes = prime_factor(n);//����������
//	vector<int>divs = divisor(n);//����Լ��
//	ll res = 0;
//	for (int i = 0; i < divs.size(); ++i)
//	{
//		ll elur = divs[i];
//		//���ŷ������ֵ
//		for (map<int, int>::iterator it = prims.begin(); it != prime.end(); ++it)
//		{
//			int p = it->first;
//			if (divs[i] % p == 0)elur = elur / p*(p - 1);
//		}
//		res += elur*mod_pow(m, n / divs[i], MOD) % MOD;
//	}
//}
