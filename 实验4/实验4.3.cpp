#include<iostream>
using namespace std;
int main()
{
	//����100��������Ԫ�ص����飬���ڴ洢100�����ӵĿ���״̬
	bool list[100] = { 0 };
	//����forѭ��������Ŀ���������Ĳ���
	for (int student = 1; student <= 100; student++)
	{
		for (int lock = student - 1; lock <100; lock+=student)
		{
			list[lock] = !list[lock];
		}
	}
	//������
	cout << "������ɺ󣬿��ŵĹ������Ϊ��" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (list[i])
		{
			cout << i+1 << " ";
		}
	}
	return 0;
}