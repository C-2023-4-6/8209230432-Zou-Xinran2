#include<iostream>
using namespace std;
int main()
{
	//创建100个布尔型元素的数组，用于存储100个柜子的开关状态
	bool list[100] = { 0 };
	//运用for循环遍历题目中所描述的操作
	for (int student = 1; student <= 100; student++)
	{
		for (int lock = student - 1; lock <100; lock+=student)
		{
			list[lock] = !list[lock];
		}
	}
	//输出结果
	cout << "操作完成后，开着的柜子序号为：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (list[i])
		{
			cout << i+1 << " ";
		}
	}
	return 0;
}