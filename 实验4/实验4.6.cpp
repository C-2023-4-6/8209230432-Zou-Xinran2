#include<iostream>
using namespace std;
//���庯��������ͳ�Ƹ���ĸ���ִ���
void count(const char s[], int counts[])
{
	//����forѭ�������ַ����е���ĸ	
	for (int i = 0; s[i] != '\0'; i++)
	{
		char letter = s[i];
		//����д��ĸת��ΪСд
		if (letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
		}
		//ͳ�Ƹ�Сд��ĸ���ֵĴ���
		if (letter >= 'a' && letter <= 'z')
		{
			int index = letter - 97;
			counts[index]++;
		}
	}
}
int main()
{
	//�����������ڴ洢26����ĸ���ֵĴ���
	int counts[26] = {0};
	//��ʾ�����ַ���
	char s[1000];
	cout << "������һ���ַ�����" << endl;
	cin.getline(s, 1000);
	//���ú���
	count(s, counts);
	//������
	cout << "ÿ����ĸ���ֵĴ�����" << endl;
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char letter = 'a' + i;
			cout << letter << "���ֵĴ����ǣ�" << counts[i] << endl;
		}
	}
	return 0;
}