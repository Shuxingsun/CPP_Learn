#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			throw out_of_range("ÄêÁä±ØÐëÔÚ0~150");
			
		}
		else
		{
			{
				this->m_Age = age;
			}
		}
	}

	int m_Age;
};

void test01()
{
	try
	{
		Person p1(152);
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}