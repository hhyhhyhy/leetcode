////证明过程为什么将较短的边向中间
////假设A[0]<A[n-1]如果A[0]<A[k]那么显然右边向左部不大于A[0],A[n-1]
////如果A[0]>A[k]那么短边就是A[k]距离也变短也不行
////所以当前位置是短边向中间靠近的
////那么为什么不右移动呢因为是从最右边开始的显然若没有比右边最长的还大的边不可能移动到当前位置
////那么其实两边高的停留是目前扫过的边中最长的边
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