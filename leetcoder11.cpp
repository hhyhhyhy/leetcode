////֤������Ϊʲô���϶̵ı����м�
////����A[0]<A[n-1]���A[0]<A[k]��ô��Ȼ�ұ����󲿲�����A[0],A[n-1]
////���A[0]>A[k]��ô�̱߾���A[k]����Ҳ���Ҳ����
////���Ե�ǰλ���Ƕ̱����м俿����
////��ôΪʲô�����ƶ�����Ϊ�Ǵ����ұ߿�ʼ����Ȼ��û�б��ұ���Ļ���ı߲������ƶ�����ǰλ��
////��ô��ʵ���߸ߵ�ͣ����Ŀǰɨ���ı�����ı�
//class Solution {
//public:
//	int maxArea(vector<int> &height)
//	{
//		int capability = 0;
//		size_t left = 0, right = height.size() - 1;
//
//		while (left < right)
//		{
//			const int water =
//				min(height[left], height[right]) * (right - left);
//
//			if (water > capability) capability = water;
//
//			if (height[left] < height[right])
//			{
//				++left;
//			}
//			else
//			{
//				--right;
//			}
//		}
//
//		return capability;
//	}
//};