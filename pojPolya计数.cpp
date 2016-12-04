////旋转K个位置由于第i个位置和(i+k*t)(mod n)的颜色是相同的可以看作是一条轨迹求解轨迹的个数
////由于每一条轨迹上个数为k*t=0(Mod n)所以个数就是t = n/gcd(k,n)
////由于每一条轨迹的个数相同，所以个数就是n/t = gcd(k,n)但是由于n很大如果按照0-n-1顺序枚举无法求解
////由于gcd(k,n)是有限值假设d是n的约束，统计满足gcd(k,n)=d的个数显然k是d的倍数所以k = dt其中d =gcd(k,n) = gcd(dt,n) = d*gcd(t,n/d)因此gcd(t,n/d)=1
////满足条件的t的个数就是欧拉函数￥(n/d)所以得到公式1/n sigma(m^d￥(n/d))
////还可以继续简化因为d的质因子也是n的质因子，如果事先求出了n的质因子那么。计算质因子用logn
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
//	map<int, int>primes = prime_factor(n);//所有质因子
//	vector<int>divs = divisor(n);//所有约束
//	ll res = 0;
//	for (int i = 0; i < divs.size(); ++i)
//	{
//		ll elur = divs[i];
//		//求解欧拉函数值
//		for (map<int, int>::iterator it = prims.begin(); it != prime.end(); ++it)
//		{
//			int p = it->first;
//			if (divs[i] % p == 0)elur = elur / p*(p - 1);
//		}
//		res += elur*mod_pow(m, n / divs[i], MOD) % MOD;
//	}
//}
