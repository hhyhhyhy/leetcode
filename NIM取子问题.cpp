////����K������a1,a2,..akһ��ʼ��X��Ӳ�ң�ÿ��ȡa1a2..ak��һ����ALICK��ȡȡ�����һ��Ӳ�ҵĻ�ʤ
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//#define MAX_K 110
//int X, K, A[MAX_K];
//
//bool win[MAX_K + 1];
//
//void solve()
//{
//	//�Լ�û��Ӳ�Ҿ�������
//	win[0] = false;
//
//	for (int j = 1; j <= X; ++j)
//	{
//		win[j] = false;
//		for (int i = 0; i < K; ++i)
//		{
//			win[j] |= A[i] <= j&&!win[j - A[i]];
//		}
//	}
//	if (win[X])puts("Alice");
//	else puts("Bob");
//}
//
//int main()
//{
//	cin >> X >> K;
//	for (int i = 0; i < K; ++i)
//		cin >> A[i];
//	solve();
//	return 0;
//}

