//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//struct Per
//{
//	int pos;
//	int att;
//	int hel;
//	Per() {
//		pos = 0;
//		att = 0;
//		hel = 0;
//	}
//};
//Per pers1[100];//先手的
//Per pers2[100];//后手的
//int hel1;
//int hel2;
//
//int hasSet(int flag,int pos,int k)
//{
//	if (!flag)
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers1[i].pos == pos)
//				return 1;
//		}
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers2[i].pos == pos)
//				return 1;
//		}
//		return 0;
//	}
//
//}
//void addPos(int index,int flag,int k)
//{
//	if (!flag)
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers1[i].pos>=index)
//			{
//				pers1[i].pos++;
//			}
//		}
//	}
//	if (flag)
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers2[i].pos>=index)
//			{
//				pers2[i].pos++;
//			}
//		}
//	}
//}
//
//int findPos(int pos,int k,int flag)
//{
//	if (!flag)
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers1[i].pos == pos)return i;
//		}
//		return -1;
//	}
//	else
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			if (pers2[i].pos == pos)return i;
//		}
//		return -1;
//	}
//}
//
//void swapPer(int a, int b,int flag)
//{
//	if (!flag)
//	{
//		Per p = pers1[a];
//		pers1[a] = pers1[b];
//		pers1[b] = p;
//	}
//	else
//	{
//		Per p = pers2[a];
//		pers2[a] = pers2[b];
//		pers2[b] = p;
//	}
//}
//void delPos(int index,int k,int flag)
//{
//	if (!flag)
//	{
//		swapPer(index, k-1, flag);
//		int pos = pers1[k-1].pos;
//		for (int i = 0; i < k-1; ++i)
//		{
//			if (pers1[i].pos > pos)pers1[i].pos--;
//		}
//		pers1[k-1].hel = 0;
//	}
//	if (flag)
//	{
//		swapPer(index, k-1, flag);
//		int pos = pers2[k-1].pos;
//		for (int i = 0; i < k-1; ++i)
//		{
//			if (pers2[i].pos > pos)pers2[i].pos--;
//		}
//		pers2[k - 1].hel = 0;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char ch[50];
//
//	hel1 = hel2 = 30;
//	int flag = 0;
//	int k1, k2;
//	k1 = k2 = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s", ch);
//		if (ch[0] == 's')//召唤
//		{
//			Per p;
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			if (!flag)
//			{
//				if (!hasSet(flag,a,k1))
//				{
//					p.pos = a;
//					p.att = b;
//					p.hel = c;
//					pers1[k1++] = p;
//				}
//				else
//				{
//					//增加右边所有随从的编号
//					addPos(a,flag,k1);
//					p.pos = a;
//					p.att = b;
//					p.hel = c;
//					pers1[k1++] = p;
//				}
//			}
//			else
//			{
//				if (!hasSet(flag,a,k2))
//				{
//					p.pos = a;
//					p.att = b;
//					p.hel = c;
//					pers2[k2++] = p;
//				}
//				else
//				{
//					addPos(a,flag,k2);
//					p.pos = a;
//					p.att = b;
//					p.hel = c;
//					pers2[k2++] = p;
//				}
//			}
//		}
//		else if (ch[0] == 'a')//攻击
//		{
//			int a, b;
//			scanf("%d %d", &a, &b);
//			if (!flag)
//			{
//				int p = findPos(a, k1, flag);
//				if (b == 0)
//				{
//					hel2 -= pers1[p].att;
//					if (hel2 <= 0)break;
//				}
//				int t = findPos(b, k2, 1 - flag);
//				pers1[p].hel -= pers2[t].att;
//				pers2[t].hel -= pers1[p].att;
//				if (pers1[p].hel <=0)
//				{
//					delPos(p, k1, flag);
//					k1--;
//				}
//				if (pers2[p].hel <= 0)
//				{
//					delPos(t, k2, 1-flag);
//					k2--;
//				}
//			}
//			else
//			{
//				int t = findPos(a, k2, flag);
//				if (b == 0)
//				{
//					hel1 -= pers2[t].att;
//					if (hel1 <= 0)break;
//				}
//				int p = findPos(b, k1, 1-flag);
//				pers1[p].hel -= pers2[t].att;
//				pers2[t].hel -= pers1[p].att;
//				if (pers1[p].hel <= 0)
//				{
//					delPos(p, k1, 1-flag);
//					k1--;
//				}
//				if (pers2[p].hel <= 0)
//				{
//					delPos(t, k2, flag);
//					k2--;
//				}
//			}
//
//		}
//		else//结束1
//		{
//			flag = 1 - flag;
//		}
//	}
//
//
//	//win or lose
//	if (hel1 == 0)
//	{
//		printf("%d\n", -1);
//	}
//	else if (hel2 == 0)
//	{
//		printf("%d\n", 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	printf("%d\n", hel1);
//	int rest = 0;
//	printf("%d ", k1);
//	for (int i = 0; i < k1; ++i)
//	{
//		printf("%d ", pers1[i].hel);
//	}
//	printf("\n");
//
//	printf("%d\n", hel2);
//	printf("%d ", k2);
//	for (int i = 0; i < k2; ++i)
//	{
//		printf("%d ", pers2[i].hel);
//	}
//	printf("\n");
//
//	return 0;
//}