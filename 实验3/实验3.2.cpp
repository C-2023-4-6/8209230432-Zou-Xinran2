#include<iostream>
using namespace std;
//���庯���ж��Ƿ�Ϊ����
bool is_prime(int num)
{
	//����forѭ�������ж�
	for (int i = 2;i<num; i++)
	{
		//if�ж��Ƿ�Ϊ����
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//�������
	int num = 2,sum=0;
	//����forѭ���ҳ�ǰ200������
		for (num;sum<200; num++)
		{
			//if+�������ж��Ƿ�Ϊ����
			if (is_prime(num))
			{
				cout << num << "  ";
				sum++;
				//�жϵ�ǰ�Ƿ�Ϊ10����������������
				if (sum % 10 == 0)
					cout << endl;
			}
		}
	return 0;
}