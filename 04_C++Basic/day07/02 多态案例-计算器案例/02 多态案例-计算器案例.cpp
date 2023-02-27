#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//设计原则 ： 开闭原则
// 对扩展进行开放  对修改进行关闭

//利用多态实现计算器
class AbstracCalculator
{
public:
    //纯虚函数
   //如果一个类中包含了纯虚函数，那么这个类就无法实例化对象了,这个类通常我们称为 抽象类
   //抽象类的子类 必须要重写 父类中的纯虚函数，否则也属于抽象类
    virtual int getResult() = 0;

    int m_A;
    int m_B;
};
//加法计算器
class AddCalculator : public AbstracCalculator
{
public:
    virtual int getResult()
    {
        return m_A + m_B;
    }
};
//减法计算器
class SubCalculator : public AbstracCalculator
{
public:
    virtual int getResult()
    {
        return m_A - m_B;
    }
};

//乘法计算器
class MulCalculator :public AbstracCalculator
{
public:
    virtual int getResult()
    {
        return m_A * m_B;
    }
};
class Test :public AbstracCalculator
{
    int getResult() { return 0; };
};

void test01()
{
    AbstracCalculator* calculator = new AddCalculator;
    calculator->m_A = 100;
    calculator->m_B = 50;
    cout << calculator->getResult() << endl;

    delete calculator;

    calculator = new SubCalculator;
    calculator->m_A = 100;
    calculator->m_B = 200;

    cout << calculator->getResult() << endl;
}

int main() {

    //test01();

    //AbstracCalculator abc;   //抽象类是无法实例化对象的
    Test t; //如果不重写父类的纯虚函数 ，也无法实例化对象

    system("pause");
    return EXIT_SUCCESS;
}