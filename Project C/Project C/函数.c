#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
//�¹ʶ�֪��
//���⣺��100-200֮�������   -> �Գ���  2 -> i-1
 //��1��ż��һ����������
 //��2��������п��Ա�����������2����һ�Զ��������н�С���Ǹ���һ��
       //С�ڵ��ڱ�������
       //100 = 2*50 10*10 sqrt(100)=10
//int main()
//{
//	int i = 0;
//	int count = 1;
//	for (i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		for ( j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))   //ע��ҲҪ�޸�
//		{
//			printf("%d %d\n",i,count);
//			count++;
//		}
//	}
//	return 0;
//}




//���⣺�������������Լ��
  //˼·��r=m%nѭ���ж� ��r=0ʱѭ�������Ͳ������ˣ����n��ֵ�������Լ��
  //շת�����
  //int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0; //r��ȡ�������
//	printf("�������������֣�");
//	scanf("%d %d",&a,&b);
//	while (r = a%b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("���Լ���ǣ�%d\n",b);
//	return 0;
//}




//���ӣ��������������   a b c
  //˼·����a�д�����ֵ  b�д�ŵڶ���ֵ  c�д����Сֵ
        //��Ҫʵ����Ҫ����һ������temp
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("��ֱ�����a,b,c��ֵ��");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a<b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a<c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b<c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("�������˳��Ϊ��%d %d %d",a,b,c);
//	return 0;
//}




//��1����n�Ľ׳�
  //˼·������i�����ı仯 ������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int Factorial = 1;
//	printf("������n��ֵ��");
//	scanf("%d",&n);   //scanf("������n��ֵ��%d", &n);����д����Ч
//	for (i = 1; i <= n; i++)
//	{
//		Factorial *= i;
//	}
//	printf("n�Ľ׳˽���ǣ�%d\n",Factorial);
//	return 0;
//}




//���ӣ���1��+ 2��+ 3��+ 4��+ 5��+ ���� + n!
//int main()
//{
//����һ��
//	int i = 0;
//	int j = 0;
//	int n = 0;	
//	int sum = 0;
//	printf("������n��ֵ��");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		int Factorial = 1;
//		for (j = 1; j <= i; j++)
//		{
//			Factorial *= j;
//		}
//		sum += Factorial;
//	}
//	printf("����ǣ�%d\n",sum);


//���������򻯰� 
//	int i = 0;
//	int n = 0;
//	int Factorial = 1;
//  int sum =0;
//	printf("������n��ֵ��");
//	scanf("%d",&n);   
//	for (i = 1; i <= n; i++)
//	{
//		Factorial *= i;
//		//n!�а���1! 2! 3������n! һ��һ������ ÿ���һ���ͼ���sum��
//      sum += Factorial;
//	}
//	printf("����ǣ�%d\n", sum);
//	return 0;
//}




//��3��������������û��ĳһ��ֵ
//˼·������������������һ������
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int arr[] = { 1,2,3,4,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ�ֵ��");
//	scanf("%d",&num);
//	for (i = 0; i < length; i++)
//	{
//		if (i == num)
//		{
//			printf("%d\n",i);
//			break;
//		}
//	}
//	if (i==length)
//	{
//		printf("������û�д�ֵ��");
//	}
//	return 0; 
//}


//���ֲ��ҷ���
  //˼·��left ��ֵ  right ��ֵ
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = length-1;
//	
//	printf("����Ҫ���ҵ�ֵ��");
//	scanf("%d",&n);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		//���midҪÿ�����Ŷ��ֵı仯���仯������
//		if (arr[mid]>n)   //arr[mid]�����>n
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n",arr[mid]);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�����в�����n��ֵ��");
//	}

//	return 0;
//}




////��4��welcome to bit !!!!!
//     //####################
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  //��һ���ַ���������־
//	//ռ�ַ��ռ�  ���ǲ����ַ�������
//	//int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls	");
//		left++;
//		right--;		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//����5��ģ���¼�龰����ֻ�ܵ�¼����
  //˼·���������� �ж��Ƿ���ȷ ���δ�����ʾ������������������˳�����
//int main()
//{
//	//int i = 0;
//	//char pwd[20] = { 0 };
//	//for (i = 0; i < 3; i++)
//	//{
//	//	//����ŵ�λ�ú��н�����������������������  
//	//	//�����߼�����
//	//	printf("���������룺"); 
//	//	scanf("%s", &pwd);
//	//	//�ж������ַ����Ƿ���� �ÿ⺯����strcmp
//	//	if (strcmp(pwd,"123456")==0)
//	//	{
//	//		printf("��¼�ɹ���");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("��¼ʧ�ܣ�\n");
//	//	}
//	//}
//	//if (i==3)
//	//{
//	//	printf("������������������˳�����");
//	//}
//	//return 0;
//
//
//	
//	//��дһ��
//	int i = 0;
//	char pwd[20] = {0};
//	for ( i = 0; i < 3; i++)
//	{
//	    //����˷�������  ���Է�������
//		printf("���������룺");
//		scanf("%s", pwd);
//		if (strcmp(pwd,"123456")==0)
//		{
//			printf("��½�ɹ���");
//			break;
//		}
//		else
//		{
//			if (i==2)
//			{
//				//�ر�ĺ�!
//			}
//			else
//				printf("��¼ʧ��!\n");
//		}
//	}
//	if (i==3)
//	{
//		printf("������������������˳�����");
//	}
//}




//����
//����һ���Զ��庯��get_max() �����������е����ֵ
//int get_max(int x,int y) 
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int max = get_max(a,b);
//	printf("max=%d\n",max);
//	max = get_max(100,500);
//	printf("max=%d\n", max); 
//	return 0;
//}



//*������������������ֵ Swap1  Swap2
void Swap1(int x,int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
//void Swap2(int* x,int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void Swap2(int*  x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	Swap1(a,b);
//	printf("%d %d\n",a,b);
//	Swap2(&a,&b);
//	printf("%d %d\n",a,b);
//	return 0;
//}



//�����ú����ķ�ʽ�ж�һ�����Ƿ�Ϊ����
//int is_prime(int n)
//{
//	//�±�����i ��������j����  ������ܻ��������
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j==0)
//			return 0;  //��һִ�� ���������������ˣ�   breakֻ������ѭ��
//	}
//	/*if (i==n)
//	{*/
//     return 1;  //ֻ����һ�ֿ����� ���Բ�����дif��
//	/*}*/
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)==1)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}



//�����ú���ʵ�ֲ��ҳ�1000-2000��֮�������
//int is_Run(int n)
//{
//	if ((n%4==0 && n%100!=0) || (n%400==0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for ( i = 1000; i < 2000; i++)
//	{
//		if (is_Run(i)==1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}




//�����ú���ʵ������������ֲ���
    //����ҵ��˷������ֵ���±� ����Ҳ�������-1
//int search(char arr[],int n,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;  //!!!!!!!!!!!!!!!!!
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int n = 0;
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d",&n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, n, sz);
//	printf("%d\n", ret);	
//	return 0;
//}



//��д
//int search(int arr[],int k,int sz) //ʵ�ֹ�����Ҫ�õ�ʲôֵ�ʹ���ʲô����
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k) 
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//int main()
//{
//	int k = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ�k��ֵ��");
//	scanf("%d",&k);
//	int ret = search(arr,k,sz);
//	printf("%d\n",ret);
//	return 0;
//}







//����дһ��������ÿ����һ��num�ͼ�1
//void function(int* n)  //�ı�num��ֵ  ����ַ������
//{
//	(*n)++;	
//	//�޷���ֵ ����дint����
//}
//int main()
//{
//	int num = 0;
//	function(&num);
//	printf("%d\n",num);
//	function(&num);
//	printf("%d\n", num);
//	function(&num);
//	printf("%d\n", num);
//	function(&num);
//	printf("%d\n", num);
//	return 0;
//}





//***�ݹ�



//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ 
//�� ���룺1234   �����1 2 3 4
//void print(int x)
//{
//	if (x>9)
//	{
//		print(x / 10);  //����ֵ���̼�
//	}
//	printf("%d ",x%10);  //����ֵ���༸
//}
//int main()
//{
//	int num = 0;
//	printf("������num��ֵ��");
//	scanf("%d",&num);
//	print(num);
//	/*printf("%d\n", num);*/
//	return 0;
//}



//������д���������ַ�������  ��������ʱ����
//strlen�⺯��   bit\0  һ�����ж��Ƿ�Ϊ\0
//����1��������ʱ����
//int my_strlen(char* str)
//{
//	int count = 0;  //��ʱ����
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//

//����2���ݹ�˼��ȥ��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_stlen(str+1); //�ݹ�˼��
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}




//�ݹ�͵���
//������n�Ľ׳�
//int Fac(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}




//쳲���������
//�ݹ鷽ʽ   ȱ�㣺Ч��̫��  �ظ�����̫�࣡
//int Fib(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//ѭ����ʽ  ����
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ڼ���쳲���������");
//	scanf("%d",&n);
//	int ret =  Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}



//�ݹ龭�䰸��
//��1����ŵ��

//int main()
//{
	// �ж�������ʡ��---��Ϊ��   ��ѭ��
	//for (;;)
	//{
	//	printf("hehe\n");
	//}



	//��������ҩ
	//int x, y;
	//for ( x = 0,y=0; x < 2 && y < 5; x++,++y)
	//{
	//	printf("hehe\n");
	//}




	//���1234��δ����
	/*int i =1;
	do
	{
		if (i == 5)
			continue;
			printf("%d",i);
			i++;
	} while (i<=10);*/
	//return 0;
//}
//��2��������̨��
