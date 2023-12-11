#include<iostream>
//头文件
#include"mytemperature.h"
using namespace std;
//定义两个函数
double celsius_to_fah(double cel)
{
	double fah;
	fah = cel * 9.0 / 5.0 + 32.0;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32.0) * 5.0 / 9.0;
	return cel;
}

int main()
{
	//输出首行内容
	cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
	//定义次数变量，便于表示|右方华氏温度
	int sum = 0;
	//运用for循环及函数计算并输出
	for (double cel1 = 40.0;cel1>30.0;cel1--)
	{
		//计算|左边并输出
		double fah1 = celsius_to_fah(cel1);
		cout << cel1 << "\t\t" << fah1 << "\t\t|\t";
		//计算|右边并输出
		double fah2 = 120.0 - 10.0 * sum;
		double cel2 = fahrenheit_to_cels(fah2);
		cout << fah2 << "\t\t" << cel2 << endl;
		sum++;
	}
	return 0;
}