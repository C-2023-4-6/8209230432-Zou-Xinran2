#include<iostream>
using namespace std;
//定义函数判断是否为素数
bool is_prime(int num)
{
	//利用for循环遍历判断
	for (int i = 2;i<num; i++)
	{
		//if判断是否为素数
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//定义变量
	int num = 2,sum=0;
	//运用for循环找出前200个素数
		for (num;sum<200; num++)
		{
			//if+函数，判断是否为素数
			if (is_prime(num))
			{
				cout << num << "  ";
				sum++;
				//判断当前是否为10的整数倍，是则换行
				if (sum % 10 == 0)
					cout << endl;
			}
		}
	return 0;
}