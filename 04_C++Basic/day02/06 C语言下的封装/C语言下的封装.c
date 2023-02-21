#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Person
{
	char name[64];
	int age;
};
void PersonEat(struct Person* p)
{
	printf("%s在吃饭\n", p->name);
}
void test01()
{
	struct Person p;
	strcpy(p.name, "张三");
	p.age = 20;
	PersonEat(&p);
}
struct Dog
{
	char name[64];
	int age;
};
void DogEat(struct Dog * dog)
{
	printf("%s 在吃狗粮\n", dog->name);
}
void test02()
{
	struct Dog d;
	strcpy(d.name, "wang");
	d.age = 1;
	DogEat(&d);

	struct Person p;
	strcpy(p.name, "老王");
	DogEat(& p);  //封装不严谨
}

int main() {
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}