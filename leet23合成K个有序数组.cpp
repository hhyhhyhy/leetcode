//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* mergeKLists(vector<ListNode*>& lists) {
//		ListNode*lelist;
//		ListNode*relist;
//		int n = lists.size();
//		if (lists.empty())
//		{
//			return NULL;
//		}
//		lelist= merge(lists, 0, (n-1) / 2);
//		relist = merge(lists, (n-1) / 2 + 1, n-1);
//		return merge2Lists(lelist, relist);
//	}
//	ListNode*merge(vector<ListNode*>&lists,int L,int R)
//	{
//		if (L < R)
//		{
//			int n = (R - L + 1) / 2;
//			int mid = (L + R) / 2;
//			ListNode*r1, *r2;
//			int len1, len2;
//			r1 = merge(lists, L, mid);
//			r2 = merge(lists, mid + 1, R);
//			ListNode*ret = merge2Lists(r1, r2);
//			return ret;
//		}
//		else if (L == R)
//		{
//			return lists[L];
//		}
//		else
//			return NULL;
//	}
//
//	ListNode*merge2Lists(ListNode*l1, ListNode*l2)
//	{
//		ListNode*ret = NULL;
//		ListNode*tail = NULL;
//		ListNode*h1, *h2;
//		h1 = l1; h2 = l2;
//		if (l1 == NULL&&l2 == NULL)return NULL;
//		else if (l1 == NULL)return l2;
//		else if (l2 == NULL)return l1;
//
//
//		if (h1->val < h2->val)
//		{
//			tail = new ListNode(h1->val);
//			h1 = h1->next;
//		}
//		else
//		{
//			tail = new ListNode(h2->val);
//			h2 = h2->next;
//		}
//		ret = tail;
//		while (h1!=NULL&&h2!=NULL)
//		{
//			ListNode*p;
//			if (h1->val < h2->val)
//			{
//				p = new ListNode(h1->val);
//				tail->next = p;
//				tail = p;
//				h1 = h1->next;
//			}
//			else
//			{
//				p = new ListNode(h2->val);
//				tail->next = p;
//				tail = p;
//				h2 = h2->next;
//			}
//		}
//		ListNode*p;
//		while (h1 != NULL)
//		{
//			p = new ListNode(h1->val);
//			tail->next = p;
//			tail = p;
//			h1 = h1->next;
//		}
//		while (h2 != NULL)
//		{
//			p = new ListNode(h2->val);
//			tail ->next = p;
//			tail = p;
//			h2 = h2->next;
//		}
//
//		return ret;
//	}
//
//};
//
//
//int main()
//{
//	vector<ListNode*>lists;
//	ListNode*l1;
//	ListNode*l2;
//	l1 = l2 = NULL;
//	ListNode*p = l1;
//	p = new ListNode(1);
//	l1 = p;
//	p = new ListNode(2);
//	l2 = p;
//	lists.push_back(l1);
//	lists.push_back(l2);
//	Solution s;
//	ListNode*m = s.mergeKLists(lists);
//
//	return 0;
//}