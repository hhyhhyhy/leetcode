////��ʵ����һ�ֶ����㷨
////����̰��
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////��̬�滮��ʱ O(n2��������Ҫ���Խ��
////����̰���㷨��
////��ǰλ�����С��Ŀ��λ����ô�ƶ��������ĵص�ʹ���Լ�����Զ��λ��
////�൱��һ�������ǰλ�ÿ��Ե�����һ��λ����ô���ø���
//
//class Solution {
//public:
//	int jump(vector<int>& nums) {
//		int pos = 0;
//		int step = 0;
//		int curmax = 0;
//		int n = nums.size();
//		for (int i = 0; i < n; ++i)
//		{
//			//����ǰλ�ñ�ʵ��λ�ô�Ļ������´ο����ƶ�������Զ����
//			if (pos < i)
//			{
//				step++;
//				pos = curmax;
//			}
//			curmax = max(curmax, i + nums[i]);
//		}
//
//		return step;
//	}
//private:
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<int>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	cout<<s.jump(nums);
//	return 0;
//}