#include<iostream>
#include<string>
using namespace std;
//���庯��
int indexOf(const char s1[], const char s2[])
{
	//����������ڴ���s2�±�
	int i = 0;
	//����������淵��ֵ
	int numReturn = -1;
	//��whileѭ�������ж�s2�Ƿ����
	while (s2[i] != '\0')
	{
		//���������¼s1��s2�±꣬���ڱȽ�
		int k = i, j = 0;
		//��whileѭ�������ж�s1�Ƿ���s2���ִ�
			while (s1[j] != '\0' && s1[j] == s2[k])
			{
				k++;
				j++;
			}
			if (s1[j] == '\0')
			{
				numReturn = i;
			}
		i++;
	}
	return numReturn;
}
int main()
{
	//���������������ڴ��������ַ���
	char* s1=new char[100];
	char* s2=new char[100];
	//��ʾ���������ַ���
	cout << "�������һ���ַ�����" << endl;
	cin.getline(s1, 100);
	cout << "������ڶ����ַ�����" << endl;
	cin.getline(s2, 100);
	//���ú���
	int index = indexOf(s1, s2);
	//������
	cout << "indexOf" << "(��" << s1 << "����" << "��" << s2 << "����" << "is" << index;
	return 0;
}