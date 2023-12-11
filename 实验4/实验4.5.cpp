#include<iostream>
#include<string>
using namespace std;
//定义函数
int indexOf(const char s1[], const char s2[])
{
	//定义变量用于储存s2下标
	int i = 0;
	//定义变量储存返回值
	int numReturn = -1;
	//用while循环遍历判断s2是否结束
	while (s2[i] != '\0')
	{
		//定义变量记录s1及s2下标，便于比较
		int k = i, j = 0;
		//用while循环遍历判断s1是否是s2的字串
			while (s1[j] != '\0' && s1[j] == s2[k])
			{
				k++;
				j++;
			}
			if (s1[j] == '\0')
			{
				numReturn = i;
			}
		i++;
	}
	return numReturn;
}
int main()
{
	//定义两个数组用于储存两个字符串
	char* s1=new char[100];
	char* s2=new char[100];
	//提示输入两个字符串
	cout << "请输入第一个字符串：" << endl;
	cin.getline(s1, 100);
	cout << "请输入第二个字符串：" << endl;
	cin.getline(s2, 100);
	//调用函数
	int index = indexOf(s1, s2);
	//输出结果
	cout << "indexOf" << "(“" << s1 << "”，" << "“" << s2 << "”）" << "is" << index;
	return 0;
}