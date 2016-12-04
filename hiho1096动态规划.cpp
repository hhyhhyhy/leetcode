////题意：给定N然后将N划分为K个数，这K个数的乘积是M的倍数计算有多少个这种
////由于可以分成的组数是小于等于14的
////需要记录两个状态一个前i-1个数中最大数为j的有多少可能
#pragma warning(disable:4996)
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define MOD 1000000007

int N, M;

long long ret;
//
////乘法用long long
//void dfs(int lmax, int lsum, long long lmul)//状态有当前几位，当前最大数，当前的和
//{
//	if (lsum == N)
//	{
//		if (lmul%M == 0)
//		{
//			ret = (ret + 1) % MOD;
//		}
//	}
//	else
//	{
//		for (int i = lmax + 1; i <= (N - lsum); ++i)
//		{
//			dfs(i, lsum + i, lmul*i);
//		}
//	}
//}
//void solve()
//{
//	//初始化
//	//求出最多几位
//	ret = 0;
//	dfs(0, 0, 1);
//	cout << ret << endl;
//}
//
//int main()
//{
//	cin >> N >> M;
//	solve();
//
//	return 0;
//}
//



	////这题的巧解
	//gcd(Mul*L, M) = gcd(P * K * L, Q * K) = K * gcd(P * L, Q) ≥ K
	//
	//由于 P 与 Q 互质，所以我们可以得到gcd(P * L, Q) = gcd(L, Q)。
	//
	//因此有
	//
	//gcd(Mul*L, M) = K * gcd(P * L, Q) = K * gcd(L, Q) = gcd(K * L, K * Q) = gcd(K * L, M)


//int f[5000][105][104];
//
//void solve()
//{
//	memset(f, 0, sizeof(f));
//
//	for (int i = 0; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			for (int l = 1; l <= N; ++l)
//			{
//				if (f[i][j][l] > 0)
//				{
//					for (int k = j + 1; k <= (N - i); ++k)
//					{
//						f[i + k][k][gcd[l*k, M]] = (f[i + k][k][gcd[l*k, M]] + f[i][j][l]) % MOD;
//					}
//				}
//			}
//		}
//	}
//}