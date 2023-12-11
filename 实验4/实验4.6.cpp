#include<iostream>
using namespace std;
//定义函数，用于统计各字母出现次数
void count(const char s[], int counts[])
{
	//运用for循环遍历字符串中的字母	
	for (int i = 0; s[i] != '\0'; i++)
	{
		char letter = s[i];
		//将大写字母转化为小写
		if (letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
		}
		//统计各小写字母出现的次数
		if (letter >= 'a' && letter <= 'z')
		{
			int index = letter - 97;
			counts[index]++;
		}
	}
}
int main()
{
	//定义数组用于存储26个字母出现的次数
	int counts[26] = {0};
	//提示输入字符串
	char s[1000];
	cout << "请输入一个字符串：" << endl;
	cin.getline(s, 1000);
	//调用函数
	count(s, counts);
	//输出结果
	cout << "每个字母出现的次数：" << endl;
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char letter = 'a' + i;
			cout << letter << "出现的次数是：" << counts[i] << endl;
		}
	}
	return 0;
}