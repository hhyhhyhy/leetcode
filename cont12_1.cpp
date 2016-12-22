//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool isOk(int radius, vector<int>&hourse, vector<int>&heater)
//{
//	vector<int> coverd;
//	coverd.resize(hourse.size());
//	for (int i = 0; i < heater.size(); ++i)
//	{
//		int L = heater[i] - radius;
//		int R = heater[i] + radius;
//		if (L < 1)L = 1;
//		if (R > hourse.size())R = hourse.size();
//		for (int j = L; j <= R; ++j)
//			coverd[j-1] = 1;
//	}
//	for (int i = 0; i < coverd.size(); ++i)
//	{
//		if (!coverd[i])return false;
//	}
//	return true;
//}
//
//class Solution {
//public:
//	int findRadius(vector<int>& houses, vector<int>& heaters) {
//		int maxRadius = houses.size();
//		int minRadius = -1;
//		for (int i = 1; i <= maxRadius; ++i)
//		{
//			if (isOk(i, houses, heaters))
//			{
//				minRadius = i;
//				break;
//			}
//		}
//		return minRadius;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<int>pos;
//	cin >> n;
//	pos.resize(n);
//	for (int i = 0; i < n; ++i)cin >> pos[i];
//	vector<int>heat;
//	int m;
//	cin >> m;
//	heat.resize(m);
//	for (int i = 0; i < m; ++i)cin >> heat[i];
//	cout<<s.findRadius(pos, heat);
//	return 0;
//}