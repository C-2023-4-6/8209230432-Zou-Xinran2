#include<iostream>
using namespace std;
//�������Լ���ĺ���
int calculate1(int* p1, int* p2)
{
	int m = 1,num1;//�������
	while (*p1 >= m && *p2 >= m)//����whileѭ�������Լ��
	{
		if (*p1 % m == 0 && *p2 % m == 0)
		{
			num1 = m;
		}
		m++;
	}
	return num1;
}
//������С�������ĺ���
int calculate2(int* p1, int* p2)
{
	//��a��b�е����ֵ
	int n = max(*p1, *p2),num2;
	//forѭ������С������
	for (num2 = n;; num2++)
	{
		if (num2 % *p1 == 0 && num2 % *p2 == 0)
		{
			break;
		}
	}
	return num2;
}
int main()
{
	int a, b,num1,num2;
	//��ʾ����������
	cout << "������������������" << endl;
	cin >> a >> b;
	//ͨ�������������Լ������С������
	num1 = calculate1(&a, &b);
	num2 = calculate2(&a, &b);
	cout << "�������������Լ��Ϊ��" << num1 << endl;
	cout << "������������С������Ϊ��" << num2 << endl;
	return 0;
}