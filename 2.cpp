//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//int n;
//int nset[25][8];
//
////返回开始位置p是需求长度
//int findMaxCorLens(int row,int p)
//{
//	//首先排相邻的最长序列
//	for (int k = 1; k <= 5; ++k)
//	{
//		int lens = 0;
//		for (int e = k; e <= 5; ++e)
//		{
//			if (!nset[row][e]) {
//				lens++; if (lens == p)break;
//			}
//			else
//				break;
//		}
//		if (lens == p)return k;
//	}
//	return -1;
//}
//int  findNCorLens(int row, int p)
//{
//	int lens = 0;
//	for (int k = 1; k <= 5; ++k)
//	{
//		if (!nset[row][k]) {
//			lens++; if (lens == p)break;
//		}
//	}
//	if (lens == p)return 1;
//	else
//		return -1;
//}
//void printNCor(int row, int p)
//{
//	int lens = 0;
//	int indx = (row - 1) * 5;
//	for (int k = 1; k <= 5; ++k)
//	{
//		if (!nset[row][k]) {
//			printf("%d ", indx + k);
//			nset[row][k] = 1;
//			lens++; 
//			if (lens == p)break;
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	scanf("%d", &n);
//	memset(nset, 0, sizeof(nset));
//	int p;
//	int row = 20;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &p);
//		for (int j = 1; j <= row; ++j)
//		{
//			int flag = 0;
//			//求出该行是否有连续
//			int nbeg;
//			nbeg = findMaxCorLens(j, p);
//			if (nbeg>0)
//			{
//				//输出连续
//				int indx = (j - 1) * 5;
//				for (int k = nbeg; k < nbeg + p; ++k) {
//					printf("%d ", indx+k);
//					nset[j][k] = 1;
//				}
//				printf("\n");
//				break;
//			}
//			else if(findNCorLens(j, p)>0)//寻找非连续的
//			{
//				//输出非连续的
//				printNCor(j, p);
//				break;
//			}
//		}
//	}
//	
//	return 0;
//}