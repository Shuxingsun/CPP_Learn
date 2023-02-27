#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class MyException
{
public:
	MyException()
	{
		cout << "MyException默认构造函数调用" << endl;
	}
	MyException(const MyException& e)
	{
		cout << "MyException的默认构造函数调用" << endl;
	}
	~MyException()
	{
		cout << "MyException析构函数调用" << endl;
	}
};
void doWork()
{
	throw new MyException();
}

void test01()
{
	try
	{
		doWork();
	}
	catch (MyException * e)
	{
		cout << "自定义异常捕获" << endl;
		delete e;
	}

}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}