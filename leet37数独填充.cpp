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
//P addStep(P s)
//{
//	P r;
//	if (s.j == 8) { r.j = 0; r.i = s.i + 1; }
//	else {
//		r.i = s.i; r.j = s.j + 1;
//	}
//	return r;
//}
//vector<vector<int> >result;
//class Solution {
//public:
//	void solveSudoku(vector<vector<char>>& board) {
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
//		//开始填数字
//		result.resize(9);
//		for (int i = 0; i < 9; ++i)result[i].resize(9);
//		for (int i = 0; i < 9; ++i)
//		{
//			int num;
//			for (int j = 0; j < 9; ++j)
//			{
//				if (board[i][j] != '.')
//				{
//					num = board[i][j] - '0';
//					ret[i][j] = num;
//					rtag[i][num] = 1;
//					ctag[j][num] = 1;
//					int id = numQuote(i, j);
//					vqote[id][num] = 1;
//				}
//			}
//		}
//
//		P st; st.i = st.j = 0;
//		dfs(st, board, rtag, ctag, vqote, ret);
//		for (int i = 0; i < 9; ++i)
//			for (int j = 0; j < 9; ++j)
//				board[i][j] = result[i][j]+'0';
//		return;
//	}
//	//表示遍历的时候当前行的和以及列的和
//	void dfs(P p, vector<vector<char> >&board,vector<vector<int> > &rtag, 
//		vector<vector<int> >&ctag, vector<vector<int> >vqote,vector<vector<int> >&ret)
//	{
//		int i, j;
//		i = p.i;
//		j = p.j;
//		int k = numQuote(i, j);
//		if (i == 9)//结束条件
//		{
//			result = ret;
//			return;
//		}
//		if (board[i][j] != '.')
//		{
//			dfs(addStep(p), board, rtag, ctag, vqote, ret);
//			return;
//		}
//		for (int num = 1; num <=9; ++num)
//		{
//			//遍历这个数字在所在行以及列
//			if (board[i][j] == '.'&&rtag[i][num] == 0 && ctag[j][num] == 0 && vqote[k][num] == 0)
//			{
//				rtag[i][num] = 1;
//				ctag[j][num] = 1;
//				vqote[k][num] = 1;
//				ret[i][j] = num;
//				dfs(addStep(p), board, rtag, ctag, vqote,ret);
//				rtag[i][num] = 0;
//				ctag[j][num] = 0;
//				vqote[k][num] = 0;
//			}
//		}
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	vector<vector<char> > board;
//	board.resize(9);
//	for (int i = 0; i < 9; ++i)
//	{
//		board[i].resize(9);
//	}
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; ++j)
//		{
//			cin >> board[i][j];
//		}
//	}
//	s.solveSudoku(board);
//	return 0;
//}
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