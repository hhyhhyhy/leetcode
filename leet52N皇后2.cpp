//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////���N�ʺ����еĽ�
////���Բ��洢����ͼ��ʡ�ڴ�ռ�
//
//class Solution {
//public:
//	int totalNQueens(int n) {
//		colN.resize(n);
//		grid.resize(n);
//		til = 0;
//		dfs(0,n);
//		return til;
//	}
//
//	bool isSafe(int curRow, int curCol)
//	{
//		for (int i = curRow - 1; i >= 0; i--)
//		{
//			int lsCol = grid[i];
//			if (((curRow - i) == (curCol - lsCol)) || ((curRow - i) == (lsCol - curCol)))
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	void dfs(int row,int n)
//	{
//		if (row == n)
//		{
//			//output(n);
//			til++;
//			return;
//		}
//		for (int i = 0; i <n; ++i)
//		{
//			if (!colN[i])//��û���غ�
//			{
//				if (!isSafe(row, i))continue;
//				//����������
//				colN[i] = 1;
//				grid[row] = i;
//				dfs(row + 1, n);
//				colN[i] = 0;
//				grid[row] = -1;
//			}
//		}
//	}
//private:
//	vector<int>colN;
//	vector<int>grid;
//	int til;
//	vector<vector<string> >sret;
//	//vector<vector<int> >grid;//����ͼ
//};
//
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	cout<<s.totalNQueens(n);
//	return 0;
//}