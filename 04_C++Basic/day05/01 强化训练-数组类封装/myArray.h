#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyArray
{
public:
	MyArray(); //默认构造

	MyArray(int capacity);

	MyArray(const MyArray& arr); //拷贝构造

	//尾插法
	void pushBack(int val);

	//根据位置设置数据
	void setDate(int pos, int val);

	//根据位置获取数据
	int getData(int pos);

	//获取数组容量
	int getCapacity();

	//获取数组大小
	int getSize();

	//析构
	~MyArray();

	//重载[]运算符
	int& operator[] (int index);



private:
	int m_Capacity; //数组容量
	int m_Size;
	int *pAddress; //真实在堆区开辟的数组的指针

};