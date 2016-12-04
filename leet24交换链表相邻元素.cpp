//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}	
//};
//
//class Solution {
//public:
//	ListNode* swapPairs(ListNode* head) {
//		ListNode*p = head;
//		if (p == NULL)return NULL;
//		p = p->next;
//		ListNode*pre;
//		pre = head;
//		while (p != NULL)
//		{
//			//½»»»Êý¾Ý
//			int v = pre->val;
//			pre->val = p->val;
//			p->val = v;
//
//			pre = p->next;
//			p = p->next;
//			if (p == NULL)break;
//			p = p->next;
//		}
//		return head;
//	}
//};
//
//int main()
//{
//	Solution s;
//	ListNode*P;
//	P = new ListNode(1);
//	P->next = new ListNode(2);
//	s.swapPairs(P);
//	return 0;
//}