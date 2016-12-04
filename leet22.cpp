//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//
//
//class Solution {
//public:
//	vector<string> generateParenthesis(int n) {
//		step = 0;
//		ret.clear();
//		string str;
//		str.resize(2*n);
//		nmax = n;
//		dfs(n, 0,str,0);
//		return ret;
//	}
//
//	//搜索的时候保存的状态为当前已经有几个前置括号了
//	//后面的长度加1
//	void dfs(int Lrest, int Rest,string str,int k)
//	{
//		if (Lrest > 0)
//		{
//			str[k] = '(';
//			dfs(Lrest - 1, Rest + 1,str,k+1);
//			if (Rest > 0) {
//				str[k] = ')';
//				dfs(Lrest, Rest - 1,str,k+1);
//			}
//		}
//		else if (Rest > 0)
//		{
//			str[k] = ')';
//			dfs(Lrest, Rest - 1,str,k+1);
//		}
//		else
//		{
//			ret.push_back(str);
//			step++;
//		}
//	}
//private:
//	int nmax;
//	int step;
//	vector<string>ret;
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<string>ret = s.generateParenthesis(n);
//	for (int i = 0; i < ret.size(); ++i)
//		cout << ret[i] << " ";
//	cout << endl;
//	return 0;
//}