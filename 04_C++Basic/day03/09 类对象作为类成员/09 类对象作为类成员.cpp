#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Phone
{
public:
    Phone(string pName)
    {
        cout << "phone 的有参函数构造" << endl;
        m_PhoneName = pName;
    }

    ~Phone()
    {
        cout << "phone的析构函数调用" << endl;
    }

    string m_PhoneName;
};

class Game
{
public:
    Game(string gName)
    {
        cout << "Game 的有参构造调用" << endl;
        m_GameName = gName;
    }
    ~Game()
    {
        cout << "Game 的析构函数调用" << endl;
    }

    string m_GameName;

};

class Person
{
public:
    Person(string name, string pName, string gName) : m_Name(name),m_Phone(pName),m_Game(gName)
    {
        cout << "Person的有参函数调用" << endl;
    }

    void PlayGame()
    {
        cout << m_Name << "拿着" << m_Phone.m_PhoneName << " 派 手机，玩着" << m_Game.m_GameName << endl;
    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

    string m_Name;
    Phone m_Phone;
    Game m_Game;
};

void test01()
{
    //但其它类对象 作为本类成员 先构造其它类成员 在构造自身，析构顺序和构造相反
    Person p("张三", "苹果", "王者荣耀");
    p.PlayGame();

    Person p2("尼斯", "三星", "消消乐");
    p2.PlayGame();
}

int main() {
    test01();


    system("pause");
    return EXIT_SUCCESS;
}