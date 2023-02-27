#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1show 调用" << endl;
    }
};
class Person2
{
public:
    void showPerson2()
    {
        cout << "Personshow2调用" << endl;
    }
};
//类模板中的成员函数 并不是一开始创建的 而是在运行阶段确定出T 的数据类型采取创建
template<class T>
class MyClass
{
public:
    void fun1()
    {
        obj.showPerson1();
    }
    void fun2()
    {
        obj.showPerson2();
    }

    T obj;
};
void test01()
{
    MyClass <Person2> p1;
    //p1.fun1(); //不可调用 fun1属于Person1
    p1.fun2();
}

int main() {

    test01();

    system("pause");
    return EXIT_SUCCESS;
}