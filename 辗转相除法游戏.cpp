////给定a ,b每次从较大的数减去较小的数倍数1道2倍等不能小于0谁会获胜
////分析：如果b已经是a的倍数了肯定必胜
////对于a,b大小关系有两种情况b-a<a，那么当前状态只有一种选择如果减去后是必败的那么当前就是必胜
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	int a, b;
//
//	while (cin >> a>>b)
//	{
//		if (a == 0 && b == 0)break;
//		bool f = true;
//		for (;;)
//		{
//			if (a > b)swap(a, b);
//			if (b%a==0)break;
//			//由于b-a(x-1)来判断。如果是减去后是必败的那么就这样
//			//如果减去b-a(x-1)是必胜的，但是下一次一定会转移到b-ax状态。所以直接道B-ax状态就行了
//			if (b - a > a)
//			{
//				break;
//			}
//			b -= a;
//			f = !f;
//		}
//		if (f)puts("Stan wins");
//		else puts("Ollie wins");
//	}
//	return 0;
//}