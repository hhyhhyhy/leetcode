//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<map>
//using namespace std;
//
//
////���Ӷ�NK 
////����ֻ��ͳ�����е�26����ĸ
//class Solution {
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		//��Щ�ַ��ù�����Щ�ַ�û�ù�
//		map<string, int>vGroup;
//		vector<int>iGroup;
//		iGroup.resize(strs.size());
//		int index = 1;
//		vector<vector<string> >ret;
//		for (int i = 0; i < strs.size(); ++i)
//		{
//			//����ÿ����ĸͳ����ĸ���ֵĴ���
//			string sret = getCount(strs[i]);
//			if (vGroup[sret] == 0)
//			{
//				vGroup[sret] = index++;
//			}
//			iGroup[i] = vGroup[sret];
//		}
//
//		ret.resize(index-1);
//		for (int i = 0; i < strs.size(); ++i)
//		{
//			ret[iGroup[i] - 1].push_back(strs[i]);
//		}
//		return ret;
//	}
//	string getCount(string str)
//	{
//		string ret;
//		vector<int>vmap;
//        vmap.resize(26);
//		for (int i = 0; i < str.length(); ++i)
//		{
//			vmap[str[i]-'a'] += 1;
//		}
//		for (int i = 0; i < 26; ++i)
//		{
//			if (vmap[i] > 0)
//			{
//				ret.push_back('a' + i);
//				ret.push_back(vmap[i]+'0');
//			}
//		}
//		return ret;
//	}
//private:
//	vector<int>nCount;
//};
//
//
//int main()
//{
//	Solution s;
//	int n;
//	vector<string>nums;
//	cin >> n;
//	nums.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	vector<vector<string> >ret = s.groupAnagrams(nums);
//	return 0;
//}