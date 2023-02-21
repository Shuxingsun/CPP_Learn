#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	int getAge()
	{
		return m_Age;
	}
	void setAge(int age)
	{
		if (age < 0 || age > 100)
		{
			cout << "你这个老妖怪" << endl;
			return;
		}
		m_Age = age;
	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}


private:
	string m_Name; //可读写
	int m_Age = 18; //可读
	string m_Lover; //只写

};

void test01()
{
	Person p;
	p.setName("张三");
	cout << "姓名：" << p.getName() << endl;
	
	p.setAge(200);
	cout << "年龄：" << p.getAge() << endl;

	p.setLover("王琴");
}

int main()
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}