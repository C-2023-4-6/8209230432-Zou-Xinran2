#include<iostream>
using namespace std;
//���庯�����ڽ������е�Ԫ��ð������
void bubbleSort(int p[], int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}
	}
}
int main()
{
	//�������������ֱ����ڴ���Ԫ�ظ�������Ҫ��̬���Ե�Ԫ�����
	int len;
	int index;
	//��ʾ��������
	cout << "����������Ԫ�ظ�����" << endl;
	cin >> len;
	int* p =new int[len];
	cout << "�����������е�Ԫ�أ�" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p+i);
	}
	//��̬����
	cout << "����������Ҫ�۲��Ԫ�أ�" << endl;
	cin >> index;
	cout << "��Ԫ��Ϊ��" << *(p + index - 1) << endl;
	bubbleSort(p, len);
	//��������Ľ��
	for (int i = 0; i < len; i++)
	{
		cout << *(p + i) << " ";
	}
	delete p;
	return 0;
}