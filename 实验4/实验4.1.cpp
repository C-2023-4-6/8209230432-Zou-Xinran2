#include<iostream>
using namespace std;
int main()
{
	//定义两个数组，分别用于存储初始数据以及不同的数字
	int num[10];
	int num_distinct[10];
	int sum = 0;
	//提示输入10个数
	cout << "请输入十个数：" << endl;
	for (int i = 0; i < 10;i++)
	{
		cin >> num[i];
	}
	//运用for循环嵌套判断是否为不同的数，是则存入数组
	for (int i = 0; i < 10; i++)
	{
		bool distinct = 1;
		for (int j = i+1; j < 10; j++)
		{
			if (num[i] == num[j])
				{
				distinct = 0;
				break;
				}
			
		}
		if(distinct)
		{
			num_distinct[sum] = num[i];
			sum++;
		}
	}
	//输出结果
	cout << "其中不同的数为：" << endl;
	for (int i = 0; i < sum; i++)
		cout << num_distinct[i] << "  ";
	return 0;
}