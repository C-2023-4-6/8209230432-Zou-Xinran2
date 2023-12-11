#include<iostream>
using namespace std;
//计算最大公约数的函数
int calculate1(int* p1, int* p2)
{
	int m = 1,num1;//定义变量
	while (*p1 >= m && *p2 >= m)//运用while循环求最大公约数
	{
		if (*p1 % m == 0 && *p2 % m == 0)
		{
			num1 = m;
		}
		m++;
	}
	return num1;
}
//计算最小公倍数的函数
int calculate2(int* p1, int* p2)
{
	//求a，b中的最大值
	int n = max(*p1, *p2),num2;
	//for循环求最小公倍数
	for (num2 = n;; num2++)
	{
		if (num2 % *p1 == 0 && num2 % *p2 == 0)
		{
			break;
		}
	}
	return num2;
}
int main()
{
	int a, b,num1,num2;
	//提示输入正整数
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	//通过函数计算最大公约数和最小公倍数
	num1 = calculate1(&a, &b);
	num2 = calculate2(&a, &b);
	cout << "这两个数的最大公约数为：" << num1 << endl;
	cout << "这两个数的最小公倍数为：" << num2 << endl;
	return 0;
}