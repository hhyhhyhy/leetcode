////将矩阵旋转90度
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void rotate(vector<vector<int>>& matrix) {
//		vector<vector<int> >ret;
//		ret.resize(matrix.size());
//		for (int i = 0; i < ret.size(); ++i)
//			ret[i].resize(matrix.size());
//		int n = matrix.size();
//		//最后一列开始
//		for (int i = n-1; i>=0; --i)
//		{
//			//第一个元素开始
//			for (int j = 0; j < n;++j)
//			{
//				ret[j][i] = matrix[n-1-i][j];
//			}
//		}
//
//		for (int i = 0; i < n; ++i)
//			for (int j = 0; j < n; ++j)
//				matrix[i][j] = ret[i][j];
//	}
//};
//
//int main()
//{
//	Solution s;
//
//	return 0;
//}