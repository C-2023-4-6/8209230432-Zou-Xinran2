#include<iostream>
//ͷ�ļ�
#include"mytemperature.h"
using namespace std;
//������������
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
	//�����������
	cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
	//����������������ڱ�ʾ|�ҷ������¶�
	int sum = 0;
	//����forѭ�����������㲢���
	for (double cel1 = 40.0;cel1>30.0;cel1--)
	{
		//����|��߲����
		double fah1 = celsius_to_fah(cel1);
		cout << cel1 << "\t\t" << fah1 << "\t\t|\t";
		//����|�ұ߲����
		double fah2 = 120.0 - 10.0 * sum;
		double cel2 = fahrenheit_to_cels(fah2);
		cout << fah2 << "\t\t" << cel2 << endl;
		sum++;
	}
	return 0;
}