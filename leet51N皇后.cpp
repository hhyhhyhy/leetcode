//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
////输出N皇后所有的解
////可以不存储整个图节省内存空间
//
//class Solution {
//public:
//	vector<vector<string>> solveNQueens(int n) {
//		colN.resize(n);
//		grid.resize(n);
//		dfs(0,n);
//		return sret;
//	}
//
//	void output(int n)
//	{
//		vector<string>lines;
//		string line;
//		line.resize(n);
//		for (int i = 0; i < n; ++i)
//		{
//			int cur = grid[i];
//			for (int j = 0; j < n; ++j)
//			{
//				if (j==cur)
//				{
//					line[j] = 'Q';
//				}
//				else
//					line[j] = '.';
//			}
//			lines.push_back(line);
//		}
//		sret.push_back(lines);
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
//			output(n);
//			return;
//		}
//		for (int i = 0; i <n; ++i)
//		{
//			if (!colN[i])//列没有重合
//			{
//				if (!isSafe(row, i))continue;
//				//都满足条件
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
//	vector<vector<string> >sret;
//	//vector<vector<int> >grid;//最后的图
//};
//
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<vector<string> > sr= s.solveNQueens(n);
//	for (int i = 0; i < sr.size(); ++i)
//	{
//		for (int j = 0; j < sr[i].size(); ++j)
//		{
//			cout << sr[i][j] << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}