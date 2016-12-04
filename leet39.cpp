////感觉类似多重背包
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//vector<vector<int> >ret;
//vector<int>vec;
//class Solution {
//public:
//	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//		vec.resize(candidates.size());//每个位置所用的次数
//		dfs(0, 0, target, candidates);
//		return curret;
//	}
//	void dfs(int cur, int cursum,int target,vector<int>&cand)
//	{
//		if (cursum == target)
//		{
//			//根据所用的次数返回
//			vector<int>vs;
//			for (int i = 0; i <=cur; ++i)
//			{
//				for (int j = 0; j < vec[i]; ++j)vs.push_back(cand[i]);
//			}
//			curret.push_back(vs);
//		}
//		else if (cursum > target||cur>=cand.size())return;
//		else
//		{
//			//是否选择当前位置
//			dfs(cur + 1, cursum, target, cand);
//			//选择当前位置
//			vec[cur]++;
//			dfs(cur, cursum + cand[cur], target, cand);
//			vec[cur]--;
//		}
//	}
//private:
//	vector<vector<int> > curret;
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i)cin >> v[i];
//	Solution s;
//	int tar;
//	cin >> tar;
//	ret = s.combinationSum(v, tar);
//	for (int i = 0; i < ret.size(); ++i)
//	{
//		for (int j = 0; j < ret[i].size(); ++j)
//			cout << ret[i][j]<<" ";
//		cout << endl;
//	}
//	return 0;
//}