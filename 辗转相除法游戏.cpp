////����a ,bÿ�δӽϴ������ȥ��С��������1��2���Ȳ���С��0˭���ʤ
////���������b�Ѿ���a�ı����˿϶���ʤ
////����a,b��С��ϵ���������b-a<a����ô��ǰ״ֻ̬��һ��ѡ�������ȥ���Ǳذܵ���ô��ǰ���Ǳ�ʤ
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	int a, b;
//
//	while (cin >> a>>b)
//	{
//		if (a == 0 && b == 0)break;
//		bool f = true;
//		for (;;)
//		{
//			if (a > b)swap(a, b);
//			if (b%a==0)break;
//			//����b-a(x-1)���жϡ�����Ǽ�ȥ���Ǳذܵ���ô������
//			//�����ȥb-a(x-1)�Ǳ�ʤ�ģ�������һ��һ����ת�Ƶ�b-ax״̬������ֱ�ӵ�B-ax״̬������
//			if (b - a > a)
//			{
//				break;
//			}
//			b -= a;
//			f = !f;
//		}
//		if (f)puts("Stan wins");
//		else puts("Ollie wins");
//	}
//	return 0;
//}