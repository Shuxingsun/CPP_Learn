#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include<queue>
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	string m_Name;
	int m_Age;
};


void test01()
{
	queue<Person> q; //队列容器

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("dd", 40);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "size = " << q.size() << endl;

	while (!q.empty())
	{
		cout << "队头元素--- 姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
		cout << "队尾元素--- 姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;

		//出队
		q.pop();
	}

	cout << "size = " << q.size() << endl;
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}