#include<iostream>
using namespace std;
//���庯��
int peach_(int peach)
{
	peach = (peach + 1) * 2;
	return peach;
}
int main()
{
	//�������ӱ���
	int peach=1;
	//����forѭ���ݹ�
	for (int sum = 0; sum < 9; sum++)
	{
		peach = peach_(peach);
	}
	//������
	cout << peach;
	return 0;
}