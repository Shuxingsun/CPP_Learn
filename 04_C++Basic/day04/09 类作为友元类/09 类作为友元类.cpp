#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Building;
class GoodDay {
public:
	GoodDay();

	void visit();
	Building* m_building;
};

class Building
{
	//让goodGay类作为 Building的好朋友，可以访问私有成员
	friend class GoodDay;
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}
GoodDay::GoodDay()
{
	this->m_building = new Building;
}

void GoodDay::visit()
{
	cout << "好基友正在访问： " << this->m_building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << this->m_building->m_BedRoom << endl;
}
void test01()
{
	GoodDay gg;
	gg.visit();
}
int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}