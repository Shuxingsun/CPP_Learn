#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class MyOutOfRangeException :public exception
{
public:
	MyOutOfRangeException(const char* str)
	{
		this->m_errorInfo = str;
	}
	MyOutOfRangeException(string str)
	{
		this->m_errorInfo = str;
	}
	virtual const char* what() const
	{
		//将string 转为 const char * 
		return m_errorInfo.c_str();
	}

	string m_errorInfo;
};


class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			throw MyOutOfRangeException(string("年龄必须在0-150"));
		}
		else
		{
			this->m_Age = age;
				 
		}
	}

	int m_Age;
};
void test01()
{
	try
	{
		Person p1(143);
	}
	catch (MyOutOfRangeException & e)
	{
		cout << e.what() << endl;
	}
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}