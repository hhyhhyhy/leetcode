//ͨ��˫ָ�룬ͷָ���ǵ�ǰ��һ���ǵݼ���λ�ã�βָ���ǵ�ǰ�߶�λ��
//ͨ������ջ��ά�����ݳ�ջ��ʱ�������ˮ�Ժ��޸ĸ߶�
//�㷨˼·��1��Ϊ��ջֱ�Ӽ���ջ
//          2.����ǰ��Ϊ��ջ���۵�ǰ�߶���ջ���߶ȵ�ֵ
//                   ��С�ڵ���ջ���߶�ֱ�Ӽ���ջ
//                   �����赱ǰλ��Ϊj���ҵ�ջ�ڴ��ҵ����һ���ǵݼ���λ��i�� i+1 ��j-1֮�䶼��ջ���޸ĸ߶�Ϊ min(height[i],height[j])
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
////��������Ҫά��������Сֵ
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
//				if (stk.top() < height[i])//�����ұߵ�����
//				{
//					//����ߵ�����
//					//����һ��ջά��
//					stack<int>vstk;
//					//�Ӻ���ǰ�ҵ���һ���ǵݼ���λ��
//					while (!stk.empty()&&(vstk.empty()||stk.top() <=vstk.top()))
//					{
//						vstk.push(stk.top());
//						stk.pop();
//					}
//					//�п���ȫ�ǵݼ����������ж��Ƿ�û���ҵ���
//					if (stk.empty())
//					{
//						while (!vstk.empty()) { stk.push(vstk.top()); vstk.pop(); }
//						stk.push(height[i]);
//						++i;
//						continue;
//					}
//					int stds = min(stk.top(), height[i]);//ѡ���θߵ�
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