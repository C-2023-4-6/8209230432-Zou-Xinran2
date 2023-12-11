#include<iostream>
#include<string>
using namespace std;
//定义函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	//定义变量
	int num1 = 0, num2 = 0, num3 = 0,temp;
	//运用for循环将两个数组合并为一个
	for (num3;num1<size1; num3++)
	{
		list3[num3] = list1[num1];
		num1++;
	}
	for (num3; num2 < size2; num3++)
	{
		list3[num3] = list2[num2];
		num2++;
	}
	//冒泡排序
	for (int i = 0; i < size1 + size2-1; i++)
	{
		for (int j = 0; j < size1 + size2 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				temp = list3[j + 1];
				list3[j + 1] = list3[j];
				list3[j] = temp;
			}
		}
	}
}
int main()
{
	//提示输入两个数组的元素个数及元素
	int size1 = 0, size2 = 0;
	cout << "请输入第一个数组的元素个数：";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "请输入第一个数组：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个数组的元素个数：";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "请输入第二个数组：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	//调用函数
	merge(list1, size1, list2, size2, list3);
	//输出结果
	cout << "合并后排列好的数组为：" << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}