#include<iostream>
using namespace std;
int main()
{
	//�����������飬�ֱ����ڴ洢��ʼ�����Լ���ͬ������
	int num[10];
	int num_distinct[10];
	int sum = 0;
	//��ʾ����10����
	cout << "������ʮ������" << endl;
	for (int i = 0; i < 10;i++)
	{
		cin >> num[i];
	}
	//����forѭ��Ƕ���ж��Ƿ�Ϊ��ͬ�����������������
	for (int i = 0; i < 10; i++)
	{
		bool distinct = 1;
		for (int j = i+1; j < 10; j++)
		{
			if (num[i] == num[j])
				{
				distinct = 0;
				break;
				}
			
		}
		if(distinct)
		{
			num_distinct[sum] = num[i];
			sum++;
		}
	}
	//������
	cout << "���в�ͬ����Ϊ��" << endl;
	for (int i = 0; i < sum; i++)
		cout << num_distinct[i] << "  ";
	return 0;
}