//#pragma warning(disable:4996)
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#define MAX(a,b) (a>b?a:b)
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode():val(0),next(NULL){}
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode* reverList(ListNode*L)
//{
//	ListNode*p = L;
//	ListNode*pre = L;
//	ListNode*nex;
//	p = p->next;
//	pre->next = NULL;
//	while (p)
//	{
//		nex = p->next;
//		p->next = pre;
//		L = p;
//		pre = p;
//		p = nex;
//	}
//	return L;
//}
//
//class Solution
//{
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode*ret = NULL;
//		ListNode*h1 = l1;
//		ListNode*h2 = l2;
//		ListNode*h;
//		int net;
//		net = 0;
//		for (; h1 != NULL&&h2 != NULL; h1 = h1->next, h2 = h2->next)
//		{
//			int val = h1->val + h2->val + net;
//			if (ret == NULL)
//			{
//				ret = new ListNode(val%10);
//			}
//			else
//			{
//				h = new ListNode(val % 10);
//				h->next = ret;
//				ret = h;
//			}
//			net = val / 10;
//		}
//		while (h1 != NULL)
//		{
//			int val = h1->val+net;
//			if (ret == NULL)
//			{
//				ret = new ListNode(val%10);
//			}
//			else
//			{
//				h = new ListNode(val%10);
//				h->next = ret;
//				ret = h;
//			}
//			net = val/ 10;
//			h1 = h1->next;
//		}
//		while (h2 != NULL)
//		{
//			int val = h2->val + net;
//			if (ret == NULL)
//			{
//				ret = new ListNode(val%10);
//			}
//			else
//			{
//				h = new ListNode(val%10);
//				h->next = ret;
//				ret = h;
//			}
//			net = val / 10;
//			h2 = h2->next;
//		}
//		if (net != 0)
//		{
//			h = new ListNode(net);
//			h->next = ret;
//			ret = h;
//		}
//		ret = reverList(ret);
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution c;
//	ListNode*l1, *l2;
//	ListNode*p1, *p2;
//	l1 = NULL;
//	l2 = NULL;
//	l1 = new ListNode(9);
//	p1 = new ListNode(9);
//	p1->next = l1;
//	l1 = p1;
//	l2 = new ListNode(1);
//	ListNode*ret = c.addTwoNumbers(l1, l2);
//	p1 = ret;
//	while (p1 != NULL)
//	{
//		printf("%d ",p1->val);
//		p1 = p1->next;
//	}
//	return 0;
//}