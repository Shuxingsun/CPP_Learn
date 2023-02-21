#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
	//公共权限
public:
	
	char name[64];
	int age;
	void PersonEat()
	{
		printf("%s在吃饭\n", name);
	}
};


struct Dog
{
public:
	char name[64];
	int age;
	void DogEat()
	{
		printf("%s 在吃狗粮\n", name);
	}
};

void test01()
{
	struct Person p;
	strcpy(p.name, "张三");
	p.age = 20;
	p.PersonEat();

}
/*
struct 和class区别
class 默认权限 私有权限 struct 默认权限时公共权限
访问权限
public 成员 类内 类外 都可以访问
private  成员 类内 可以访问 类外 不可以访问 儿子不可以访问父亲的private权限
protected  成员 类内 可以访问 类外 不可以访问 儿子可以访问父亲的protected权限
*/

class Person2
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_pwd;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "宝马";
		m_pwd = 123456;
	}

};



void test02()
{
	Person2 p;
	p.m_Name = "尼斯";
	cout << p.m_Name << endl;
	//p.m_Car = "劳斯莱斯";  保护权限、私有权限 类外访问不到
	//p.m_pwd = 12321;
}

int main() {
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}