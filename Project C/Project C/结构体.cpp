#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//struct stuu   //stuu �нṹ���ǩ
//{
//	char name[20];
//	char sex[5];
//	int age;
//	char tele[12];
//};
//
//typedef struct stu  //�ṹ���ǩ��Ҳ�����ظ�
//{
//	double d;
//	int a;
//	//int arr[20];
//	struct stuu s;
//}Stu;      //�Զ�������
//int main()
//{
//	//�ṹ��
//	//struct stuu s1 = {"��С��","��",12,"15532577805"}; //�ֲ�����
//
//	Stu s2 = { 3.14,34,{"��С��","��",12,"15532577805"} };
//	/*printf("%s\n",s1.name);
//	printf("%s\n", s1.sex);
//	printf("%d\n", s1.age);
//	printf("%s\n",s1.tele);*/
//	//������������Ӧ���õ�%��ĸ Ҫ�������������
//	printf("%d\n", s2.s.age);
//	printf("%lf\n", s2.d);
//	printf("%s\n", s2.s.sex);
//	return 0;
//}




//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char hobby[100];
//}Stu;
//struct Book
//{
//	char name[30];
//	int a;
//	double b;
//	char c[50];
//	struct Stu s;
//};
//int main()
//{
//	Stu s1 = {"�ŷ�",30,"��","�Ժ�����˯~"};
//	struct Book s2 = { "�ն��´�",55,3.14,"�ܺÿ�",{"�ŷ�",30,"��","�Ժ�����˯~"} };
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.hobby);
//	printf("%lf\n", s2.b);
//	printf("%s\n", s2.s.name);
//	return 0;
//}



//���ú���ʵ�ֽṹ��������ݵ����



struct pr
{
	char name[20];
	int age;
	double d;
	char str[60];
};

//��Ҫ����д�ڽṹ���·� ��ΪҪ���ʵ��ṹ���������
//��ֵ����
void Printf(struct pr p)
{
	printf("%s\n", p.name);
	printf("%d\n", p.age);
	printf("%lf\n", p.d);
	printf("%s\n", p.str);
};
//��ַ����    ע�������ʽ
void Printff(struct pr* p)
{
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%lf\n", p->d);
	printf("%s\n", p->str);
}

int main()
{
	struct pr p = {"�ܲ�",67,3.14,"����������"};
	Printf(p);
	//���ַ�ʽ����
	Printff(&p);
	return 0;
}