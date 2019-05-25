#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stddef.h>
//自定义数据类型：结构体，枚举，联合
//C语言中结构体不能为空
//typedef struct student
//{
//	int nun;
//	char name[20];
//	int age;
//}STU;//<-类型
//struct node
//{
//	int n;
//	struct node *next;//确定了大小，指针有四个字节
//};
//
//int main(){
//	struct student a;
//	printf("%d\n", sizeof(struct student));
//	system("pause");
//	return 0;
//}

//*结构体的内存对齐
//struct s1{
//	char c1;
//	
//	char c3;
//	int c2;
//};
//struct s2{
//	char c1;
//	int c2;
//	char c3;
//};
//struct s3{
//	struct s1 a;// 8
//	int c2;// 4
//	char c3[15];// 15
//};
//1.第一个成员永远都放在结构体起始位置的0偏移量处                *
//2.从第二个成员开始，每个成员都放在某个对齐数的整数倍的偏移量处 *
//  某个对齐数：min（成员自身对齐数，默认对齐数）                *
//  VS：8   LINUX gcc：4
//3.结构体的总大小是所有成员对齐数中的最大值的整数倍


//int main(){
//	printf("%d\n", offsetof(struct s3, a));
//	printf("%d\n", offsetof(struct s3, c2));
//	printf("%d\n", offsetof(struct s3, c3));
//	printf("%d\n", sizeof(struct s3));
//	system("pause");
//	return 0;
//}

//typedef struct student{
//	int num;
//	char name[20];
//	char sex;
//}STU;
//int main(){
//	STU a = { 1, "zhangsan", 'f' };//初始化以及赋值
//	STU b;//初始化
//	b.num = 2;//赋值
//	strcpy(b.name, "lisi");//赋值
//	b.sex = 'm';//赋值
//	STU c;
//	STU *p = &a;//赋值
//	c = { 3, "wangwu", 'm' };
//	printf("%d,%s,%c\n", a.num, a.name, a.sex);
//	printf("%d,%s,%c\n", b.num, b.name, b.sex);
//	printf("%d,%s,%c\n", c.num, c.name, c.sex);
//	printf("%d,%s,%c\n", (*p).num, p->name, p->sex);
//	system("pause");
//	return 0;
//}

//#pragma pack(1)
//struct data{
//	int a;
//	char c;
//};
//int main(){
//	printf("%d\n", offsetof(struct data, a));
//	printf("%d\n", offsetof(struct data, c));
//	printf("%d\n", sizeof(struct data));
//	system("pause");
//	return 0;
//}

//位段的内存分布：以四个字节或者一个字节开辟
//                int、  unsigned int 、 signed int
//                存在很多不确定的因素
//struct A{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main(){
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}

//枚举:列举
//enum week{Mon=1,Tues,Wed,Thu,Fri,Sat,Sun};
//int main(){
//	enum wekk w;
//	w = Thu;
//	printf("%d\n", w);
//	system("pause");
//	return 0;
//}

//联合（共用体）：共用同一块空间
//union data{
//	int a;
//	char b;
//	double c;
//};
//union data{
//	int i;
//	char c;
//};
//int main(){
//	union data d;
//	d.i = 0x11223344;
//	d.c = 0x55;
//	/*printf("%p\n", &(aa.a));
//	printf("%p\n", &(aa.b));
//	printf("%p\n", &(aa.c));*///三个地址空间，同一个
//	printf("%x\n", d.i);
//	printf("%x\n", d.c);
//	system("pause");
//	return 0;
//}

