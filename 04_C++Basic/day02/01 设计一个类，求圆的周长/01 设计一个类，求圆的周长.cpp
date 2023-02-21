#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//升级一个类， 求圆的周长
const double PI = 3.14;

// class + 类名

class Circle
{
public: //公共权限
	//类中的变量 称为成员变量 成员属性
	int m_R;
	double calculateZC()
	{
		return 2 * PI * m_R;
	}
	//设置半径
	void setR(int r)
	{
		m_R = r;
	}
	//获取半径
	int getR()
	{
		return m_R;
	}

};

void test01()
{
	//通过类创建一个对象 实例化对象
	Circle c1;
	//给c1半径赋值
	//c1.setR(10);
	c1.m_R = 10;

	//求c1圆周长
	cout << "圆的半径为: " << c1.getR() << endl;
	cout << "圆的周长为：" << c1.calculateZC() << endl;
}

//创建一个学生类
class Student
{
public:
	string m_Name;
	int m_Id;
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int id)
	{
		m_Id = id;
	}

	void showStudent()
	{
		cout << "姓名：" << m_Name << "学号：" << m_Id << endl;
	}

};

void test02()
{
	Student s1;
	s1.m_Name = "张三";
	s1.m_Id = 1;

	cout << "姓名：" << s1.m_Name << "学号：" <<s1.m_Id << endl;

	Student s2;
	s2.m_Name = "尼斯";
	s2.m_Id = 2;
	s2.showStudent();
}

int main() {
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}