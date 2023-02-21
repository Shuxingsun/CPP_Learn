#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {
public:
    Person(int age)
    {
        //用途1：解决名称冲突
        this->age = age;
    }
    //this指针 隐式加在每个成员函数中
    bool compareAge(Person& p)
    {
        if (this->age == p.age)
        {
            return true;
        }
        return false;
    }
    Person& personAddPerson(Person& p)
    {
        this->age += p.age;
        return *this; //*this 就是本体
    }

    int age;
};

void test01()
{
   //this 指针指向 被调用的成员函数 所属的对象
    Person p1(10);
    cout << "p1 的年龄：" << p1.age << endl;

    Person p2(10);
    bool ret = p1.compareAge(p2);
    if (ret)
    {
        cout << "p1 p2 年龄相等" << endl;
    }
    
    p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2);  //链式编程

    cout << "p1的年龄 ：" << p1.age << endl;
}

int main() {

    test01();

    system("pause");
    return EXIT_SUCCESS;
}