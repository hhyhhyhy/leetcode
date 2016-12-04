//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//struct P
//{
//	int i;
//	int j;
//	bool operator<(const P&p2)const
//	{
//		return (i < p2.i)||(i==p2.i&&j<p2.j);
//	}
//
//};
//int numQuote(int i, int j)
//{
//	int nr = i / 3; int pr = j / 3;
//	return nr*3 + pr;
//}
//class Solution {
//public:
//	bool isValidSudoku(vector<vector<char>>& board) {
//		vector<vector<int> >rtag;
//		vector<vector<int> >ctag;
//		//map<P, int>pInd;//方块的索引位置
//		rtag.resize(board.size());
//		ctag.resize(board.size());
//		for (int i = 0; i < rtag.size(); ++i)
//		{
//			rtag[i].resize(10);
//			ctag[i].resize(10);
//		}
//		//进行处理
//		vector<vector<int> >vqote;
//		vqote.resize(9);
//		for (int i = 0; i < 9; ++i)vqote[i].resize(10);
//		
//		vector<vector<int> >ret;
//		ret.resize(9);
//		for (int i = 0; i < 9; ++i)ret[i].resize(9);
//		for (int i = 0; i < 9; ++i)
//		{
//			int num;
//			for (int j = 0; j < 9; ++j)
//			{
//				if (board[i][j] != '.')
//				{
//					num = board[i][j] - '0';
//					ret[i][j] = num;
//					rtag[i][num] +=1;
//					ctag[j][num] +=1;
//					int id = numQuote(i, j);
//					vqote[id][num] +=1;
//					if (rtag[i][num]>1 || ctag[j][num]>1 || vqote[id][num]>1)return false;
//				}
//			}
//		}
//		return true;
//	}
//};
//
//
///*
//5 3 . . 7 . . . .
//6 . . 1 9 5 . . .
//. 9 8 . . . . 6 .
//8 . . . 6 . . . 3
//4 . . 8 . 3 . . 1
//7 . . . 2 . . . 6
//. 6 . . . . 2 8 .
//. . . 4 1 9 . . 5
//. . . . 8 . . 7 9
//*/