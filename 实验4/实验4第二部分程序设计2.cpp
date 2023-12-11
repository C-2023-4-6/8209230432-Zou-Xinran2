#include<iostream>
#include<string>
using namespace std;
//定义函数，将16进制转化为10进制
int parseHex(const char* const hexString)
{
	//定义一个string类型的变量用于储存hexString的值
	string hex = hexString;
	//初始化转化后的十进制的数
	int ten=0;
	//用for循环遍历字符串中的字符，将其转化为十进制
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
		//计算每一位应乘的幂次
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
	//调用函数，输出结果
	int num=parseHex("A5");
	cout << "转化为十进制为：" <<num<< endl;
	return 0;
}