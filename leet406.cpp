////h���ǵ�ǰ�û��ĸ߶ȣ�k�����ڵ�ǰ�û�֮ǰ�ȸ��û��ߵ�����
////���������h1<h2 k1<k2���ܽ���  h1<h2 k1>k2��Ҫ����
////���ڵ�ʱ��h1==h2 k1<k2
///���Ʋ�������ÿ�β����λ�ö��Ƕ���ǰ���Ѿ��ź�������е����λ��
////6 7 0 4 4 7 1 5 0	
////6 1 5 2
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���°���λ��ʹ�ø����ؼ�����Ч
//
//int cmp(pair<int, int>&p1, pair<int, int>&p2)
//{
//	return (p1.second< p2.second||(p1.second==p2.second&&p1.first <= p2.first));
//}
//
//class Solution {
//public:
//	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
//		vector<pair<int, int>>v2;
//		vector<pair<int, int>>v1;
//		v1 = people;
//		sort(v1.begin(), v1.end(),cmp);//�߶�
//		//���д���
//		for (int i = 0; i < v1.size(); ++i)
//		{
//			int nums = 0;
//			int j = 0;
//			while(j<i)
//			{
//				if (nums > v1[i].second)break;
//				else if (nums == v1[i].second)
//				{
//					if (v1[i].first <= v1[j].first)break;
//				}
//				else if (v1[j].first >= v1[i].first)nums++;
//				j++;
//			}
//			if (j < i) 
//			{ 
//				pair<int,int>v = v1[i];
//				for (int k = i; k > j; k--)
//				{
//					v1[k] = v1[k - 1];
//				}
//				v1[j] = v;
//			}
//		}
//		return v1;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	vector<pair<int, int>>nums;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		int p, k;
//		cin >> p >> k;
//		nums[i] = make_pair(p, k);
//	}
//	s.reconstructQueue(nums);
//	return 0;
//}