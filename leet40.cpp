////���Խ����Ż��������������ͬ��ǰ��һ��������������ſ�����
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//
//
//
//class Solution {
//public:
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//		sort(candidates.begin(), candidates.end());
//		used.resize(candidates.size());
//		dp(0, 0, target, candidates);
//		//vector<vector<int> >uniret;
//		//for (int i = 0; i < ret.size(); ++i)
//		//{
//		//	if (uniret.empty())uniret.push_back(ret[i]);
//		//	else
//		//	{
//		//		int flag = 0;
//		//		for (int j = 0; j < uniret.size(); ++j)
//		//		{
//		//			if (uniret[j] == ret[i]) {
//		//				flag = 1; break;
//		//			}
//		//		}
//		//		if (!flag)uniret.push_back(ret[i]);
//		//	}
//		//}
//		return ret;
//	}
//	void dp(int cur, int sums, int target, vector<int>&candidates)
//	{
//		if (sums == target)
//		{
//			vector<int>vec;
//			for (int i = 0; i < candidates.size(); ++i)
//			{
//				if (used[i])vec.push_back(candidates[i]);
//			}
//			ret.push_back(vec);
//			
//		}
//		else if (sums > target||cur>=candidates.size())return;
//		else
//		{
//
//			//ѡ��ǰλ��
//			//ǰһ����ͬ�������ѡ����ô�Ҳ�ѡ����ѡ
//			if (cur >= 1 && candidates[cur - 1] == candidates[cur] && used[cur - 1] == 1)
//			{
//				//��ѡ��ǰλ��
//				dp(cur + 1, sums, target, candidates);
//				used[cur] = 1;
//				dp(cur + 1, sums + candidates[cur], target, candidates);
//				used[cur] = 0;
//			}
//			else if(cur >= 1 && candidates[cur - 1] == candidates[cur])
//			{
//				//��ѡ��ǰλ��
//				dp(cur + 1, sums, target, candidates);
//			}
//			else
//			{
//				//��ѡ��ǰλ��
//				dp(cur + 1, sums, target, candidates);
//				used[cur] = 1;
//				dp(cur + 1, sums + candidates[cur], target, candidates);
//				used[cur] = 0;
//			}
//		}
//	}
//private:
//	vector<int>used;
//	vector<vector<int> >ret;
//};
//
//int main()
//{
//	int n;
//	vector<int>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)cin >> nums[i];
//	int tar;
//	cin >> tar;
//	Solution s;
//	s.combinationSum2(nums, tar);
//	return 0;
//}