#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1. 全局变量检测增强，C++检测重定义
int a;
//int a = 10;
//2. 函数检测增强 返回值检测、形参类型检测、函数调用检测
int getRects(int w, int h)
{
	return w * h;
}
void test01()
{
	printf("%d\n", getRects(10, 10));
}
//3. 类型转换检测增强
void test02()
{
	char* p = (char*)malloc(64);
}

//4. struct增强，C++可以放函数，创建结构体变量，可以简化关键字 struct
struct Person
{
	int age;
	void func()
	{
		age++;
	}
};
void test03()
{
	Person p;
	p.age = 18;
	p.func();
	cout << "p的age=" << p.age << endl;
}
// 5. bool类型k扩展，C 语言下 没有这个类型 C++有bool类型
bool flag = true;  //
void test04()
{
	cout << sizeof(bool) << endl; //bool结果是一个字节
	flag = 100; //将非0的数都转为1
	cout << flag << endl;
}
//6.三目运算符增强
void test05()
{
	int a = 10;
	int b = 12;
	printf("ret=%d\n", a > b ? a : b);
	(a < b ? a : b) = 100;
	printf("a = %d\n", a);
	printf("b= %d\n", b);

}
//7. const增强
// 全局const 和C语言一致
const int m_A = 100;
void test06()
{
	const int m_B = 100;
	int* p = (int*)&m_B;
	*p = 200;
	cout << "m_B = " << m_B << endl;
	int arr[m_B];
}

int main() {
	//test01();
	//test03();
	//test04();
	//test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}
