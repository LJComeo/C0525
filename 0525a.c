#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stddef.h>
//�Զ����������ͣ��ṹ�壬ö�٣�����
//C�����нṹ�岻��Ϊ��
//typedef struct student
//{
//	int nun;
//	char name[20];
//	int age;
//}STU;//<-����
//struct node
//{
//	int n;
//	struct node *next;//ȷ���˴�С��ָ�����ĸ��ֽ�
//};
//
//int main(){
//	struct student a;
//	printf("%d\n", sizeof(struct student));
//	system("pause");
//	return 0;
//}

//*�ṹ����ڴ����
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
//1.��һ����Ա��Զ�����ڽṹ����ʼλ�õ�0ƫ������                *
//2.�ӵڶ�����Ա��ʼ��ÿ����Ա������ĳ������������������ƫ������ *
//  ĳ����������min����Ա�����������Ĭ�϶�������                *
//  VS��8   LINUX gcc��4
//3.�ṹ����ܴ�С�����г�Ա�������е����ֵ��������


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
//	STU a = { 1, "zhangsan", 'f' };//��ʼ���Լ���ֵ
//	STU b;//��ʼ��
//	b.num = 2;//��ֵ
//	strcpy(b.name, "lisi");//��ֵ
//	b.sex = 'm';//��ֵ
//	STU c;
//	STU *p = &a;//��ֵ
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

//λ�ε��ڴ�ֲ������ĸ��ֽڻ���һ���ֽڿ���
//                int��  unsigned int �� signed int
//                ���ںܶ಻ȷ��������
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

//ö��:�о�
//enum week{Mon=1,Tues,Wed,Thu,Fri,Sat,Sun};
//int main(){
//	enum wekk w;
//	w = Thu;
//	printf("%d\n", w);
//	system("pause");
//	return 0;
//}

//���ϣ������壩������ͬһ��ռ�
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
//	printf("%p\n", &(aa.c));*///������ַ�ռ䣬ͬһ��
//	printf("%x\n", d.i);
//	printf("%x\n", d.c);
//	system("pause");
//	return 0;
//}

