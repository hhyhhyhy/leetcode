////���⣺����NȻ��N����ΪK��������K�����ĳ˻���M�ı��������ж��ٸ�����
////���ڿ��Էֳɵ�������С�ڵ���14��
////��Ҫ��¼����״̬һ��ǰi-1�����������Ϊj���ж��ٿ���
#pragma warning(disable:4996)
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define MOD 1000000007

int N, M;

long long ret;
//
////�˷���long long
//void dfs(int lmax, int lsum, long long lmul)//״̬�е�ǰ��λ����ǰ���������ǰ�ĺ�
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
//	//��ʼ��
//	//�����༸λ
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



	////������ɽ�
	//gcd(Mul*L, M) = gcd(P * K * L, Q * K) = K * gcd(P * L, Q) �� K
	//
	//���� P �� Q ���ʣ��������ǿ��Եõ�gcd(P * L, Q) = gcd(L, Q)��
	//
	//�����
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