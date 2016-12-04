//通过双指针，头指针是当前第一个非递减的位置，尾指针是当前高度位置
//通过两个栈来维护数据出栈的时候填充了水以后修改高度
//算法思路：1若为空栈直接加入栈
//          2.若当前不为空栈讨论当前高度与栈顶高度的值
//                   若小于等于栈顶高度直接加入栈
//                   否则设当前位置为j，找到栈内从右到左第一个非递减的位置i将 i+1 到j-1之间都出栈并修改高度为 min(height[i],height[j])
////12 0 1 0 2 1 0 1 3 2 1 2 1   6
////3 4 2 3   1
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<stack>
//using namespace std;
//
//
////区间内需要维护的是最小值
//class Solution {
//public:
//	int trap(vector<int>& height) {
//		stack<int>stk;
//		int ret = 0;
//		int i = 0;
//		for (; i < height.size();)
//		{
//			if (stk.empty())
//			{
//				stk.push(height[i]);
//				++i;
//			}
//			else
//			{
//				if (stk.top() < height[i])//有了右边的屏障
//				{
//					//找左边的屏障
//					//用另一个栈维护
//					stack<int>vstk;
//					//从后往前找到第一个非递减的位置
//					while (!stk.empty()&&(vstk.empty()||stk.top() <=vstk.top()))
//					{
//						vstk.push(stk.top());
//						stk.pop();
//					}
//					//有可能全是递减的所以先判断是否没有找到过
//					if (stk.empty())
//					{
//						while (!vstk.empty()) { stk.push(vstk.top()); vstk.pop(); }
//						stk.push(height[i]);
//						++i;
//						continue;
//					}
//					int stds = min(stk.top(), height[i]);//选出次高的
//					int mids = 0;
//					while (!vstk.empty())
//					{
//						mids += (stds - vstk.top());
//						stk.push(stds);
//						vstk.pop();
//					}
//					//stk.push(height[i]);
//					ret += mids;
//				}
//				else
//				{
//					stk.push(height[i]);
//					++i;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//
//int main()  
//{
//	Solution s;
//	vector<int>vec;
//	int n;
//	cin >> n;
//	vec.resize(n);
//	for (int i = 0; i < vec.size(); ++i)
//		cin >> vec[i];
//	cout << s.trap(vec);
//	return 0;
//}