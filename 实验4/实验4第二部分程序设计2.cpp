#include<iostream>
#include<string>
using namespace std;
//���庯������16����ת��Ϊ10����
int parseHex(const char* const hexString)
{
	//����һ��string���͵ı������ڴ���hexString��ֵ
	string hex = hexString;
	//��ʼ��ת�����ʮ���Ƶ���
	int ten=0;
	//��forѭ�������ַ����е��ַ�������ת��Ϊʮ����
	for (int i = 0; i < hex.length(); i++)
	{
		char a = hex[i];
		int num=0;
		if (a >= '0' && a <= '9')
		{
			num = a-'0';
		}
		else if (a >= 'A' && a <= 'F')
		{
			num = a - 'A' + 10;
		}
		int rank = hex.length() - i-1;
		//����ÿһλӦ�˵��ݴ�
		int multi = 1;
		for (int j = 0; j < rank; j++)
		{
			multi *= 16;
		}
		ten += num * multi;
	}
	return ten;
}
int main()
{
	//���ú�����������
	int num=parseHex("A5");
	cout << "ת��Ϊʮ����Ϊ��" <<num<< endl;
	return 0;
}