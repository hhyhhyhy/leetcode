////�о����ƶ��ر���
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
//		vec.resize(candidates.size());//ÿ��λ�����õĴ���
//		dfs(0, 0, target, candidates);
//		return curret;
//	}
//	void dfs(int cur, int cursum,int target,vector<int>&cand)
//	{
//		if (cursum == target)
//		{
//			//�������õĴ�������
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
//			//�Ƿ�ѡ��ǰλ��
//			dfs(cur + 1, cursum, target, cand);
//			//ѡ��ǰλ��
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