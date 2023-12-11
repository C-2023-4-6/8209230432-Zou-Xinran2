#include<iostream>
using namespace std;
//定义函数
int peach_(int peach)
{
	peach = (peach + 1) * 2;
	return peach;
}
int main()
{
	//定义桃子变量
	int peach=1;
	//运用for循环递归
	for (int sum = 0; sum < 9; sum++)
	{
		peach = peach_(peach);
	}
	//输出结果
	cout << peach;
	return 0;
}