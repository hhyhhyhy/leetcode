////��һ������������Ѱ�ҿ�ʼ�ͽ����������
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////��Ȼ�Ƕ���
//class Solution {
//public:
//	vector<int> searchRange(vector<int>& nums, int target) {
//		int L1 = 0;
//		int R1 = nums.size() - 1;
//		int L2 = 0;
//		int R2 = nums.size() - 1;
//		//�ҵ�������ֵȻ��ɨ��
//		//��һ�������������ļ�С
//		//�ڶ��������������ļ���
//		while (L1 <R1)
//		{
//			int mid = (L1 + R1) / 2;
//			if (nums[mid] >= target)
//			{
//				R1 = mid;
//			}
//			else
//				L1 = mid + 1;
//		}
//		vector<int>ret;
//		if (nums[R1] != target)
//		{
//			ret.push_back(-1); ret.push_back(-1);
//			return ret;
//		}
//		//�ҳ�������������
//		while (R2-L2>1)
//		{
//			int mid = (L2 + R2) / 2;
//			if (nums[mid] <= target)
//				L2 = mid;
//			else
//				R2 = mid - 1;
//		}
//		if (nums[R2] == target)L2 = R2;
//		ret.push_back(R1);
//		ret.push_back(L2);
//		return ret;
//	}
//};
//
//
//int main()
//{
//	int n;
//	vector<int>vec;
//	cin >> n;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> vec[i];
//	Solution s;
//	int target;
//	cin >> target;
//	vector<int>ret = s.searchRange(vec, target);
//	for (int i = 0; i < 2; ++i)cout << ret[i] << " ";
//	return 0;
//}