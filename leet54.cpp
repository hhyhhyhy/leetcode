//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		m = matrix.size();
//		vector<int>ret;
//		if (m == 0)return ret;
//		n = matrix[0].size();
//		stat = 0;
//		used.resize(m);
//		for (int i = 0; i < m; ++i)used[i].resize(n);
//
//		int curRow, curCol;
//		curRow = curCol = 0;
//		while (true)
//		{
//			path.clear();
//			if (move(curRow,curCol,matrix))//如果可以按计划移动
//			{
//		    	//输出到结果
//				output(ret);
//				if (stat == 0)curRow = curRow + 1;
//				else if (stat == 1)curCol = curCol - 1;
//				else if (stat == 2)curRow = curRow - 1;
//				else curCol = curCol + 1;
//				if (curRow >= m || curRow < 0 || curCol >= n || curCol < 0)break;
//				stat = (stat + 1) % 4;
//			}
//			else break;
//		}
//		return ret;
//	}
//	void output(vector<int>&ret)
//	{
//		for (int i = 0; i < path.size(); ++i)
//			ret.push_back(path[i]);
//	}
//	bool move(int&row,int&col,vector<vector<int> >&matrix)
//	{
//		if (used[row][col])return false;
//		if (stat == 0)//向右
//		{
//			for (int j = col; j < n; ++j)
//			{
//				if (used[row][j])break;
//				path.push_back(matrix[row][j]);
//				used[row][j] = 1;
//				col = j;
//			}
//		}
//		else if (stat == 1)//下
//		{
//			for (int j = row; j < m; ++j)
//			{
//				if (used[j][col])break;
//				path.push_back(matrix[j][col]);
//				used[j][col] = 1;
//				row = j;
//			}
//		}
//		else if (stat == 2)//左
//		{
//			for (int j = col; j >=0; --j)
//			{
//				if (used[row][j])break;
//				path.push_back(matrix[row][j]);
//				used[row][j] = 1;
//				col = j;
//			}
//		}
//		else//上
//		{
//			for (int j = row; j >=0; --j)
//			{
//				if (used[j][col])break;
//				path.push_back(matrix[j][col]);
//				used[j][col] = 1;
//				row = j;
//			}
//		}
//		return true;
//	}
//private:
//	int stat;
//	int m, n;
//	vector<vector<int>> used;
//	vector<int>path;
//};
//
//
//int main()
//{
//	Solution s;
//	vector < vector<int> >mat;
//	int m, n;
//	cin >> m >> n;
//	mat.resize(m);
//	for (int i = 0; i < m; ++i)mat[i].resize(n);
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//			cin >> mat[i][j];
//	}
//	s.spiralOrder(mat);
//	return 0;
//}