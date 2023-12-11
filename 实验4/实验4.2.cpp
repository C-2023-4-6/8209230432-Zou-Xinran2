#include<iostream>
using namespace std;
//定义冒泡排序函数
void BubbleSort(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				//交换
				double temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
				changed = true;
			}
	} while (changed);
}
int main()
{
	//定义数组
	double list[10];
	//提示输入数组中的数据
	cout << "请输入十个小数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	int len = sizeof(list) / sizeof(list[0]);
	//调用函数
	BubbleSort(list, len);
	//输出结果
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << "  ";
	}
	return 0;
}