//�Ե�ǰ���дӺ���ǰɨ�裬�ҵ�һ��Ϊ���������Ԫ�أ���Ϊi��j��i < j�����������������һ��Ϊ���������Ԫ�أ����������о����ҵ����㷨�������������¶Ե�ǰ���дӺ���ǰɨ�裬�ҵ���һ������i��Ԫ��k������i��k��Ȼ��Դ�j��ʼ�������������з�ת��
//��ʱ�õ��������о�Ϊ��һ���ֵ������С����ַ�ʽʵ�ֵõ������������ǰ��ֵ�������ģ���Ҳ��C++ STL�㷨next_permutation��˼�롣
//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//
//class Solution {
//public:
//	void nextPermutation(vector<int>& num) {
//		if (num.size() < 2) return;
//
//		int i, k;
//		for (i = num.size() - 2; i >= 0; --i)
//			if (num[i] < num[i + 1])
//				break;
//		//����������������˵����ǰ������������У���ʱi = -1����һ���м�����С���У���ת�������м���
//		if (i < 0)
//		{
//			reverse(num.begin(), num.end());
//			return;
//		}
//		//�ҵ���������
//		for (k = num.size() - 1; i >= 0 && k > i; --k)
//			if (num[i] < num[k])
//				break;
//		if (i >= 0)
//		{
//			//���ڴ�ĩβ��k+1����С��num[i]�Ľ������ǽ�������Կ���ȡ��
//			swap(num[i], num[k]);
//			reverse(num.begin() + i + 1, num.end());
//			return;
//		}
//	}
//
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<int>vec;
//	vec.resize(n);
//	for (int i = 0; i < n; ++i)
//		scanf("%d",&vec[i]);
//	s.nextPermutation(vec);
//	for (int i = 0; i < vec.size(); ++i)
//		printf("%d ", vec[i]);
//	printf("\n");
//	return 0;
//}