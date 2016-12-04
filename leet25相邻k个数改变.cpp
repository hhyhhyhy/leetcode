//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//	
//};
//
//class Solution {
//public:
//	ListNode* reverseKGroup(ListNode* head, int k) {
//		if (head == NULL)return NULL;
//		ListNode*p = head;
//		vector<ListNode*>vlend;
//		int nums = 0;
//		//预处理所有结束节点
//
//		while (p != NULL)
//		{
//			nums++;
//			if (nums == k)
//			{
//				vlend.push_back(p);
//				nums = 0;
//			}
//			p = p->next;
//		}
//		if (vlend.empty())return head;
//		if (k == 1)return head;
//
//		p = head;
//		ListNode*pre=NULL;
//		ListNode*ne = NULL;
//		ListNode*be = NULL;
//		for (int i = 0; i < vlend.size(); ++i)
//		{
//			ListNode*pend = vlend[i];
//			if (i == 0)pre = NULL;
//			ne = pend->next;
//			if (i == 0)be = pend;
//			revese1Group(pre,p, pend);
//			p->next = ne;
//			pre = p;
//			p = ne;
//		}
//		return be;
//	}
//	void revese1Group(ListNode*phead,ListNode*head, ListNode*pend)
//	{
//		ListNode*nend = head;
//		ListNode*p = head;
//		ListNode*pre = phead;
//		ListNode*n = p->next;
//		while (p != pend)
//		{
//			p->next = pre;
//			pre = p;
//			p = n;
//			n = p->next;
//		}
//		p->next = pre;
//		if(phead!=NULL)
//		phead->next = p;
//		pend = nend;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	ListNode*p;
//	p = new ListNode(1);
//	ListNode*head = p;
//	ListNode*n;
//	for (int i = 2; i <=5; ++i)
//	{
//		n = new ListNode(i);
//		p->next = n;
//		p = n;
//	}
//	int k;
//	k = 3;
//	s.reverseKGroup(head,k);
//	return 0;
//}