////给定K个数字a1,a2,..ak一开始有X个硬币，每次取a1a2..ak中一个，ALICK先取取走最后一个硬币的获胜
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
//	//自己没有硬币就是输了
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

