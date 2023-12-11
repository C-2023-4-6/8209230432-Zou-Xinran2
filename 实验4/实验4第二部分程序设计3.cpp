#include<iostream>
using namespace std;
//定义函数用于将数组中的元素冒泡排序
void bubbleSort(int p[], int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}
	}
}
int main()
{
	//定义两个变量分别用于储存元素个数和需要动态调试的元素序号
	int len;
	int index;
	//提示输入数组
	cout << "请输入数组元素个数：" << endl;
	cin >> len;
	int* p =new int[len];
	cout << "请输入数组中的元素：" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p+i);
	}
	//动态调试
	cout << "请输入你想要观察的元素：" << endl;
	cin >> index;
	cout << "该元素为：" << *(p + index - 1) << endl;
	bubbleSort(p, len);
	//输出排序后的结果
	for (int i = 0; i < len; i++)
	{
		cout << *(p + i) << " ";
	}
	delete p;
	return 0;
}