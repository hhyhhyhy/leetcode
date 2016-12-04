//class Solution {
//private:
//	double findKthSortedArrays(int A[], int m, int B[], int n, int k) {
//		if (m < n) {
//			swap(n, m);
//			swap(A, B);
//		}
//		if (n == 0)
//			return A[k - 1];
//		if (k == 1)
//			return min(A[0], B[0]);
//
//		int pb = min(k / 2, n), pa = k - pb;
//		if (A[pa - 1] > B[pb - 1])
//			return findKthSortedArrays(A, m, B + pb, n - pb, k - pb);
//		else if (A[pa - 1] < B[pb - 1])
//			return findKthSortedArrays(A + pa, m - pa, B, n, k - pa);
//		else
//			return A[pa - 1];
//	}
//
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
//	{
//		int A[100000];
//		int B[100000];
//		for (int i = 0; i<nums1.size(); ++i)
//			A[i] = nums1[i];
//		for (int i = 0; i<nums2.size(); ++i)
//			B[i] = nums2[i];
//		return findMedianSortedArrays(A, nums1.size(), B, nums2.size());
//	}
//	double findMedianSortedArrays(int A[], int m, int B[], int n) {
//		if ((n + m) & 1)
//			return findKthSortedArrays(A, m, B, n, (n + m) / 2 + 1);
//		else
//			return (findKthSortedArrays(A, m, B, n, (n + m) / 2 + 1) +
//				findKthSortedArrays(A, m, B, n, (n + m) / 2)) / 2.0;
//	}
//};