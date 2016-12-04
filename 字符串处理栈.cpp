//#pragma warning(disable:4996)
//#include<cstdio>  
//#include<cstring>  
//#include<algorithm>  
//#include<vector>  
//#include<string>  
//#include<iostream>  
//#include<queue>  
//#include<cmath>  
//#include<map>  
//#include<stack>  
//#include<set>  
//using namespace std;
//
//const int yellowLens = 8;
//const int blueLens = 6;
//const int redLens = 5;
//
//string str;
//
//int main()
//{
//	//包含空格
//	while (getline(cin,str))
//	{
//		//先对字符串预处理
//		string cstr;
//		stack<char>stk;
//		int ctred, ctblue, ctyellow;
//		ctred = ctblue = ctyellow = 0;
//		for (int i = 0; i < str.length(); ++i)
//		{
//			if (str[i] == '<'&&str[i + 1] == 'y') { i = i + yellowLens - 1; stk.push('y'); }
//			else if (str[i] == '<'&&str[i + 1] == 'b') { i = i + blueLens - 1;  stk.push('b'); }
//			else if (str[i] == '<'&&str[i + 1] == 'r') { i = i + redLens - 1; stk.push('r'); }
//			else if (str[i] == '<'&&str[i + 1] == '/'&&str[i + 2] == 'y') { stk.pop(); i = i + yellowLens; }
//			else if (str[i] == '<'&&str[i + 1] == '/'&&str[i + 2] == 'b') { stk.pop(); i = i + blueLens; }
//			else if (str[i] == '<'&&str[i + 1] == '/'&&str[i + 2] == 'r') { stk.pop(); i = i + redLens; }
//			else
//			{
//				if (stk.empty())continue;
//				if (stk.top() == 'y'&&isalpha(str[i]))ctyellow++;
//				if (stk.top() == 'b'&&isalpha(str[i]))ctblue++;
//				if (stk.top() == 'r'&&isalpha(str[i]))ctred++;
//			}
//
//		}
//
//		printf("%d %d %d\n",ctred,ctyellow,ctblue);
//	}
//	return 0;
//}