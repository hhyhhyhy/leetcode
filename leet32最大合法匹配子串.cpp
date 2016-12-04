//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//	//dp O(n^3)超时
////	int longestValidParentheses(string s) {
////		int len = s.length();
////		dp.resize(len + 1);
////		C.resize(len + 1);
////		for (int i = 0; i < len + 1; ++i) {
////			dp[i].resize(len + 1);
////			C[i].resize(len + 1);
////		}
////
////		//子串必须是连续的
////		int maxlength = 0;
////
////		for (int l = 2; l <= len; ++l)
////		{
////			for (int i = 0; i+l< len+1; ++i)
////			{
////				int j = i + l - 1;
////				if (s[i] == '('&&s[j] == ')')
////				{
////					if (dp[i + 1][j - 1]||(j-i)==1)dp[i][j] = 1;
////					else
////					{
////						for (int k = i + 1; k < j; ++k)
////						{
////							if (dp[i][k] && dp[k + 1][j])dp[i][j] = 1;
////						}
////					}
////				}
////			}
////		}
////
////		for (int l = 2; l <= len; ++l)
////		{
////			for (int i = 0; i + l < len + 1; ++i)
////			{
////				int j = i + l - 1;
////				if (s[i] == '('&&s[j] == ')')
////				{
////					if (dp[i + 1][j - 1]||(j-i)==1)maxlength = max(maxlength, (j - i + 1));
////					else
////					{
////						for (int k = i + 1; k < j; ++k)
////						{
////							if (dp[i][k] && dp[k + 1][j])maxlength = max(maxlength, (j - i + 1));
////						}
////					}
////				}
////				else if (s[i] == '('&&s[j] == '(')
////				{
////					if (dp[i][j - 1])maxlength = max(maxlength, (j - i));
////				}
////				else if (s[i] == ')'&&s[j] == '(')
////				{
////					if (dp[i + 1][j - 1])maxlength = max(maxlength, (j - i - 1));
////				}
////				else if (s[i] == ')'&&s[j] == ')')
////				{
////					if (dp[i + 1][j])maxlength = max(maxlength, (j - i));
////				}
////			}
////		}
////		return maxlength;
////	}
////private:
////	vector<vector<int> >dp;
////	vector<vector<int> >C;
//
//int longestValidParentheses(string s)
//{
//		stack<int>left;
//		int maxLength = 0;
//		int last = -1;
//		//每次被减去的都是被匹配的前一个字符
//		for (int i = 0; i < s.length(); ++i)
//		{
//			if (s[i] == '(')left.push(i);
//			else
//			{
//				if (left.empty())
//				{
//					last = i;
//				}
//				else
//				{
//					left.pop();
//					if (left.empty())
//						maxLength = max(maxLength, i - last);
//					else
//					{
//						//由于left.top+1 到i之间所有已经匹配了
//						maxLength = max(maxLength, i - left.top());
//					}
//				}
//			}
//		}
//		return maxLength;
//    }
//};
//
//
//
////class Solution
////{
////public:
////	int longestValidParentheses(string s)
////	{
////
////	}
////
////private:
////
////};
//int main()
//{
//	Solution s;
//	string str;
//	cin >> str;
//	cout<<s.longestValidParentheses(str);
//	return 0;
//}