#include<iostream>
#include<string>
using namespace std;
//���庯��
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	//�������
	int num1 = 0, num2 = 0, num3 = 0,temp;
	//����forѭ������������ϲ�Ϊһ��
	for (num3;num1<size1; num3++)
	{
		list3[num3] = list1[num1];
		num1++;
	}
	for (num3; num2 < size2; num3++)
	{
		list3[num3] = list2[num2];
		num2++;
	}
	//ð������
	for (int i = 0; i < size1 + size2-1; i++)
	{
		for (int j = 0; j < size1 + size2 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				temp = list3[j + 1];
				list3[j + 1] = list3[j];
				list3[j] = temp;
			}
		}
	}
}
int main()
{
	//��ʾ�������������Ԫ�ظ�����Ԫ��
	int size1 = 0, size2 = 0;
	cout << "�������һ�������Ԫ�ظ�����";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "�������һ�����飺" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "������ڶ��������Ԫ�ظ�����";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "������ڶ������飺" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	//���ú���
	merge(list1, size1, list2, size2, list3);
	//������
	cout << "�ϲ������кõ�����Ϊ��" << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}