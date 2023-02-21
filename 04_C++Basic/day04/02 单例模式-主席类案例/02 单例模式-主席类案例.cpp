#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//主席类
class ChairMan
{
public:
    static ChairMan * getInstance()
    {
        return singleMan;
    }
private:
    ////将主席指针 私有化，对外提供只读接口
    static ChairMan* singleMan; //类内声明 类外初始化


};

ChairMan* ChairMan::singleMan = new ChairMan;

void test01()
{
    ChairMan* c1 = ChairMan::getInstance();
    ChairMan* c2 = ChairMan::getInstance();

    if (c1 == c2)
    {
        cout << "c1 == c2" << endl;
    }
    else
    {
        cout << "c1 != c2" << endl;
    }
}

int main() {
    test01();


    system("pause");
    return EXIT_SUCCESS;
}