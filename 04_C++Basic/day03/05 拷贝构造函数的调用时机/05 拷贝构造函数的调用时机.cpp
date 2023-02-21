#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Persond的有参函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};

//1.用已经创建好的对象来初始化新的对象 有参构造 拷贝构造 析构
void test01()
{
	Person p1(18);
	Person p2 = Person(p1);
	cout << "p2的年龄：" << p2.m_Age << endl;
}

//2.值传递方式 给函数参数传值 有参构造 拷贝构造 析构
void doWork(Person P)
{

}

void test02()
{
	Person p1(100);
	doWork(p1);
}

//3.值方式 返回局部对象 默认构造 拷贝构造 析构
Person doWork2()
{
	Person p;
	return p;
}
void test03()
{
	Person p = doWork2();
}

int main() {
	//test01();
	test02();
	//test03();

	system("pause");
	return EXIT_SUCCESS;
}