#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h> 

//��֧ ѭ�� ϰ�⼯��




//int main()
//{
	//����1����n�Ľ׳�
		//int i = 0;  //��ʼ����һ����ֵ
		//int n = 0;//n�����Ҫ�Լ�����
		//printf("������n��ֵ��");
		//scanf("%d", &n);
		//int result = 1;  //���ܳ�ʼ����Ϊ��  Ϊ1
		//for (i = 1; i < n+1; i++)
		//{
		//	result *= i;
		//}
		//printf("%d\n",result);
		//return 0;


//��n�Ľ׳ˣ���ѭ�������д�� �ڶ���
//int main()
//{
//	int n = 0;
//	int num = 1;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}







	//����2����1��+ 2��+ 3��+ 4��+ 5��+ ���� + n!
		//�����Ŀ����Ҫ  ����ȥ���forѭ��
		//int i = 0;
		//int n = 0;
		//int m = 0;
		//int ret = 1;
		//int sum = 0;
		//printf("������m��ֵ��");
		//scanf("%d",&m);
		//for (n = 1; n <= m; n++)
		//{
		//	ret = 1;
		//	for (i = 1; i <= n; i++)
		//	{
		//		ret *= i;   //����������ֵ֮��ͱ��ˣ�����һ��Ҫע��
		//	}
		//	sum  += ret;
		//}
		//printf("sum = %d\n",sum);



//����һ�� ��1��+ 2��+ 3��+ 4��+ 5��+ ���� + n!
//int main()
//{
//	int n = 3;
//	int num = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//		sum += num;
//	}
//	printf("%d\n",sum);
//	return 0;
//}



//������������˫��ѭ��ʵ���������
//int main()
//{
//	int m = 3;
//	int sum = 0;
//	for (int n = 1; n <= m; n++)
//	{
//		int ret = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}






	//����3��������������û��ĳһ��ֵ
		//����һ��
		//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		//int i = 0;
		//int k = 11;
		//int sz = sizeof(arr) / sizeof(arr[0]);
		//for (i = 0; i < sz; i++)
		//{
		//	if (arr[i] == k)
		//	{
		//		printf("�ҵ��ˣ��±��ǣ�%d\n",i);
		//		break;//�ҵ���û��Ҫ�����ˣ�
		//	}
		//}
		//if (i == sz)
		//{
		//	printf("�Ҳ����������");
		//}


//�������������������û��ĳֵ
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("��������Ҫ���ҵ����֣�");
//	scanf("%d",&n);
//	int arr[20] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]==n)
//		{
//			printf("%d\n",i);
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("%d\n",-1);
//	}
//	return 0;
//}



		//�����������ֲ��ҷ�
		//int arr[] = {1,2,3,4,5,6,7,8,9,10};
		//int k = 7;
		//int left = 0;
		//int right = (sizeof(arr) / sizeof(arr[0]))-1;
		//
		//while (left <= right)
		//{
		//	int mid = (left + right) / 2;
		//	//�÷���whileѭ����
		//	if (arr[mid] > k)
		//	{
		//		right = mid - 1;
		//	}
		//	else if (arr[mid] < k)
		//	{
		//		left = mid + 1;
		//	}
		//	else
		//	{
		//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
		//		break;
		//	}
		//}
		//if (left>right)
		//{
		//	printf("�Ҳ�����");
		//}



//���ֲ��ҷ� �������в�������
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d",&n);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]<n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n",mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("������Ҫ���ҵ�����");
//	}
//	return 0;
//}


	//����4��welcome to bit !!!!!
		   //####################
		//char str1[] = "welcome to bit !!!!!";
		//char str2[] = "####################";
		//int left = 0;
		//int right = sizeof(str1)/sizeof(str1[0])-2;
		//while (left<=right)
		//{
		//	str2[left] = str1[left];
		//	str2[right] = str1[right];
		//	printf("%s\n", str2);
		//	Sleep(1000);
		//	system("cls");
		//	left++;
		//	right--;
		//}
		//printf("%s\n",str2);






 //welcome to bit !!!!!
 //####################
//int main()
//{
//	char str1[] = "welcome to bit !!!!!";
//	char str2[] = "####################";
//	int sz = sizeof(str1) / sizeof(str1[0]);
//	int left = 0;
//	int right = sz - 2; //����sz��ʱ������һ��'\n' ����Ҫ��ȥ2������
//	//char���͵�����Ҫע���ַ���������־
//	for (int i = 0; i < sz; i++)
//	{
//		if (left<=right)
//		{
//			str2[left] = str1[left];
//			left++;
//			str2[right] = str1[right];
//			right--;
//			printf("%s\n",str2);  //ע�����  ��ÿѭ��һ�ξ����һ��
          //��������  ��ס���ǵ��÷��Լ�Ҫ���õ�ͷ�ļ�
//			Sleep(1000);
//			system("cls");
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%s\n",str2);
//	return 0;
//}




//����5��ģ���¼�龰����ֻ�ܵ�¼����
//int main()
//{
//    char pwd[20] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//	    printf("�������¼���룺");
//	    scanf("%s", pwd);
//	    if (strcmp(pwd, "123456") == 0)
//	    {
//		   printf("��¼�ɹ���");
//	       break;
//	    }
//	    else
//	    {
//		  printf("��������");
//	    }
//    }
//     if (i == 3)
//     {
//	   printf("��ֹ���룡");
//     }
//   return 0;
//}




//ģ���¼�龰����ֻ�ܵ�¼����
//int main()
//{
//	int i = 0;
//	char pwd[20] = {0};	
//	for ( i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &pwd);
//		if (strcmp(pwd,"admin")==0)  //�ַ����ж��������ĸ�ַ�������==  �����������ַ�������
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//		{
//			if (i<2)
//			printf("����������������룡\n");
//		}
//	}
//	if (i==3)
//	{
//		printf("��¼�����ѳ������Σ������˳���\n");
//	}
//	return 0;
//}





//int main()
//{
//ϰ������1���������������
	//a b c
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int temp = 0;
	//printf("��ֱ�����a,b,c��ֵ");
	//scanf("%d %d %d",&a,&b,&c);
	////�㷨ʵ�֣�������ֵ����a�� b��֮ c��С
	////          ����һ��temp����
	//if (a<b)
	//{
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a<c)
	//{
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b<c)
	//{
	//	temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("������ĸ��������Ϊ��%d %d %d",a,b,c);



//ʵ���������������
//ʵ��˼·:����������a��b��c a�д�����ֵ b�д�Ŵ�֮ c�д����Сֵ
//int main()
//{
//	int a, b, c=0;
//	int temp = 0;
//	printf("��ֱ�������������ֵ��");
//	scanf("%d%d%d", &a,&b,&c);
//	if (a<b)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	if (a<c)
//	{
//		temp = c;
//		c = a;
//		a = temp;
//	}
//	if (b<c)
//	{
//		temp = c;
//		c = b;
//		b = temp;
//	}
//	printf("��������������Ľ���ǣ�%d %d %d",a,b,c);
//	return 0;
//}



  //���䣺�������ֱȳ����ֵ
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//printf("��ֱ�����abc��ֵ��");
	//scanf("%d %d %d",&a,&b,&c); //%d֮�����һ�� ������ܱ���
	//                            //�������ʾ�ܲ��ã��������Ĵ���ԭ��
	//if (a>b)
	//{
	//	if (a>c)
	//	{
	//		printf("���ֵΪ��%d\n",a);
	//	}
	//	else
	//	{
	//		printf("���ֵΪ��%d\n", c);
	//	}
	//}
	//else
	//{
	//	if (b>c)
	//	{
	//		printf("���ֵΪ��%d\n", b);
	//	}
	//	else
	//	{
	//		printf("���ֵΪ��%d\n", c);
	//	}
	//}




//��ӡһ���žų˷���
//int main()
//{
//	int num = 0;
//	char arr[]={0};
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			num = i * j;
//			printf("%d * %d = %d ",j,i,num);			
//		}
//		printf("\n");
//	}
//	return 0;
//}



//ϰ������2����ӡ��100����3�ı���
	//�㷨ʵ��˼·����ӡ1-100����������  ÿһ������%3 == 0 ��Ϊ3�ı���
	//int i = 0;
	//int count = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i%3 == 0)
	//	{
	//		printf("%d %d\n",i,count);
	//		count++;
	//	}
	//}



//ϰ������3���������������Լ��
	//˼·��m=24  n=18   r=m%n   m=n  n=r  ������m%n  ֱ��m%n==0 r�������Լ��
	//���˼· �߼� ����Ҫ��⣡  շת�����������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("��ֱ�����m,n��ֵ��");
//	scanf("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		/*r = m % n;*/
//		m = n;
//		n = r;
//	}
//	printf("���Լ���ǣ�%d\n", n);
//
//}




//�������������Լ��
//˼·��m = 24  n = 18   r = m % n   m = n  n = r  ������m%n  ֱ��m%n == 0 r�������Լ��
//int main()
//{
//	int m = 35;
//	int n = 35;
//	int r = 0;
//	while (r = m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("���Լ���ǣ�%d", n);
//	
//	return 0;
//}




//ϰ������4����ӡ1000-2000��֮�������
	//1.�ܱ�4���������ܱ�100����
	//2.�ܱ�400����
	//int i = 0;
	//int count = 1;
	//for (size_t i = 1000; i <= 2000; i++)
	//{
	//	if ((i%4==0&&i%100!=0) ||i%400==0)
	//	{
	//		printf("%d %d\n",i,count);
	//		count++;
	//	}
	//}


//ϰ������5����ӡ100-200֮�������  �ص�  �Ż����Ż�
	//˼·������ ֻ�ܱ�1���Լ���������  �Գ��� 2 -> i-1
//	int i = 0;
//	int count = 1;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}	
//		}
//		if (j == i)
//		{
//			printf("%d %d\n", i,count);
//			count++;
//		}
//	}
//	return 0;
//}



//��ӡ100-200֮�������  �ص�  �Ż����Ż�
//�Գ��� 2--->i-1

//��������1.ż��������������
          //2.��ƽ��
//int main()
//{
//	int count = 0;
//	for (int i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j==i)
//		{
//			count++;
//			printf("%d %d\n",i,count);
//		}
//	}
//
//}









//��������Ϸ
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.game 0.exit*****\n");
//	printf("***********************\n");
//}
//void game() 
//{
//	//1.�Ȳ���һ�������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n",ret);
//    //2.�ж���������������ִ�С
//	while (1)
//	{
//		printf("������Ҫ�µ����֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���");
//			break;
//		}
//	}	
//}
//int main()
//{
//////���ӣ���������Ϸ
////	//���������
////	//������  ���������
//	int input = 0;
//	//��������������
//	srand((unsigned int)time(NULL));
//	while (1)
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("��Ϸ�˳���");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//
//	return 0;
//}






////��������Ϸ
//void menu()
//{
//	printf("*****************************\n");
//	printf("********1.game 0.exit********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int r = 0;
//	int guess = 0;
//	//1.���Ȳ���һ�������
//	//2.�Լ�����һ��������������Ƚϴ�С
//	r = rand()%100+1;
//	//printf("%d\n", r);	
//	while (1)
//	{
//		printf("��������Ҫ�²�����֣�");
//		scanf("%d", &guess);
//		//ע���߼�����
//		if (guess>r)
//		{
//			printf("�´���");
//		}
//		else if (guess<r)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���");
//			break;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	srand((unsigned int)time(NULL));
//	
//	while (1)
//	{
//		//����ŵ�λ�ú���Ҫ
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &n);
//		if (n==1)
//		{
//			game();
//		}
//		else if (n==0)
//		{
//			printf("��Ϸ�˳���");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//	return 0;
//}








//�ػ�����
//int main()
//{
//	//�ػ����� shutdown -s -t 60
//	  char input[20] = { 0 };
//	  system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���һ����֮�ڹرգ�����������ȡ������\n�����룺");
//	scanf("%s",input);
//	if (strcmp(input,"������")==0)  //�Ƚ������ַ����Ƿ����
//	{
//		//system("shutdown -a");
//		printf("������ȡ����");
//	}
//	else
//	{
//		printf("δȡ�����\n");
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };  //�ַ���
//	//system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ��Խ���1�����ڹرգ�����������ȡ������\n�����룺");
//		scanf("%s", &input);                 //�����ַ���
//		if (strcmp(input, "������") == 0)    //�ַ����Ƚ��Ƿ���ȵķ���strcmp
//		{
//			//system("shutdown -a");
//			printf("������ȡ��");
//			break;
//		}
//		else
//		{
//			printf("����δȡ��,���������룡");
//		}
//	}
//	return 0;
//}