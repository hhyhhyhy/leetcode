//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> findSubstring(string s, vector<string>& words) {
//		//Ԥ�����������õ����ִ�����������
//		len = words[0].length();//����ÿ�����ʵĳ��ȶ�����ȵ�
//		for (int i = 0; i < words.size(); ++i)
//		{
//			if (vmap.count(words[i]) == 0) {
//				vmap[words[i]] = 1;
//			}
//			else
//				vmap[words[i]]++;
//		}
//
//		vector<int>ret;
//		int i = 0;
//		for (; i < s.length();++i)
//		{
//			cmap.clear();
//			int j = i + words.size()*len - 1;
//			if (j > s.length())break;
//			int tot = 0;
//			for (int k = i; k <= j; k+=len)
//			{
//				int en = k + len - 1;
//				string str = subString(k, en, s);
//				if (vmap[str] > 0 && cmap[str] < vmap[str]) { cmap[str]++; tot++; }
//				else break;
//			}
//			if (tot == words.size())
//			{
//				ret.push_back(i);
//			}
//		}
//		return ret;
//	}
//	string subString(int be, int en, string&s)
//	{
//		string str;
//		str.resize(len);
//		for (int i = be, k = 0; i <= en; ++i, ++k)
//		{
//			str[k] = s[i];
//		}
//		return str;
//	}
//
//private:
//	int len;
//	map<string, int>vmap;
//	map<string, int>cmap;//ÿһ�ε�����
//};
//
//
//int main()
//{
//	string str;
//	vector<string>vstr;
//	cin >> str;
//	int n;
//	cin >> n;
//	vstr.resize(n);
//	for (int i = 0; i < n; ++i)
//		cin >> vstr[i];
//	Solution s;
//	vector<int>ret= s.findSubstring(str, vstr);
//	for (int i = 0; i < ret.size(); ++i)
//		printf("%d ", ret[i]);
//	printf("\n");
//	return 0;
//}