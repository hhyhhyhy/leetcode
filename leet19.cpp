//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//
//struct ListNode
//{
//	int val;
//	ListNode*next;
//	ListNode(int x):val(x),next(NULL){}
//};
//
//
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		ListNode*e=head;
//		ListNode*p;ListNode*f;
//		p = f = NULL;
//		if (head==NULL)return NULL;
//		int en, fr;
//		en = 0;
//		fr = 0;
//		f = head;
//		p = head;
//		while (e->next != NULL)
//		{
//			if (en - fr + 1 < n)
//			{
//				e = e->next;
//				en++;
//			}
//			else if(fr==0&&(en-fr+1)==n)
//			{
//				f = f->next;
//				e = e->next;
//				en++;
//				fr++;
//			}
//			else if((en - fr + 1) == n)
//			{
//				f = f->next;
//				p = p->next;
//				e = e->next;
//				en++;
//				fr++;
//			}
//		}
//
//		if (en - fr + 1 < n)return NULL;
//		//É¾³ý
//		if (f == head)
//		{
//			head = head->next;
//		}
//		p->next = f->next;
//		return head;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	ListNode*h;
//	ListNode*p;
//	h = p = NULL;
//	int val;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> val;
//		if(i==0)h = new ListNode(val);
//		else
//		{
//			p = new ListNode(val);
//			p->next = h;
//			h = p;
//		}
//	}
//	ListNode*k = s.removeNthFromEnd(h, 1);
//	while (k != NULL) {
//		cout << k->val<< " ";
//		k = k->next;
//	}
//	return 0;
//}