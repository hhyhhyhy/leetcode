////�Ƿ���Էֳ��������顣��������ĺ����
////���ǽ��������ݷֶѡ��п����������ѡ�Ҳ�п������Ҷ����Ϊ0���Ҷ�Ϊ1
////˵���˾���ѡ���߲�ѡ�൱��0-1��������
//
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	bool canPartition(vector<int>& nums) {
//		int sums = 0;
//		int W = 20001;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			sums += nums[i];
//		}
//		memset(dp, 0, sizeof(dp));
//		bool flag = false;
//		dp[0] = 1;
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			for (int j = W; j >= nums[i]; j--)
//			{
//				if (dp[j - nums[i]])dp[j] |= dp[j - nums[i]];
//				if (dp[j] && (sums - j == j))
//				{
//					flag = true; 
//					break; 
//				}
//			}
//			if (flag)break;
//		}
//		return flag;
//
//	}
//	//����ÿ�����ֲ��ᳬ��100,�������ᳬ��200
//private:
//	int dp[20005];//�����ĺ�
//};
//
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)cin >> nums[i];
//	cout<<s.canPartition(nums);
//	return 0;
//}