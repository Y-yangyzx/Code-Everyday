#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����
//void Init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//�����������
//void Printf(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//��ת����
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}


//int main()
//{
//	//ʵ�ַ�ת����reverse()
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ʼ������
//	//Init(arr,sz);
//	//�������
//	Printf(arr,sz);	
//	//��ת����
//	reverse(arr,sz);
//	//��ת�������
//	Printf(arr,sz);
//	return 0;
//}

//int main()
//{
//	//ʵ�������������ݵĽ���   ע�⣺����������Ԫ�ص�ַ
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = { 6,7,8,9,0 };
//	int temp=0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	//�������Ҫ�������
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr1[j]);		
//		//printf("%d ", arr2[j]);
//	}
//	printf("\n");
//	for (int k = 0; k < sz; k++)
//	{
//		printf("%d ", arr2[k]);
//	}
//}




//***�����������1��λ��
//����һ��
//����ȱ�ݣ������޷�׼ȷ����  �Ľ� ����һ��unsigned  ����һλ�����ɷ���λ
//�ڶ��ַ���:�������������������λ&һ��1
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
      //�������
//		if (n%2==1)
//		{
//			count++;
//		}
      //ȥ�����������������
//		n = n / 2;
//	}
//	return count;
//}


//��������
//-1���ڴ��д�ŵ��ǲ���
//11111111111111111111111111111111   һλһλ�����ƶ�
//00000000000000000000000000000001
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//��������
//n=n&(n-1)
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		//ֻҪn��Ϊ��  count ++
		count++;
	}
	return count;
}

//int main()
//{
//	//ͳ�ƶ���������1�ĸ���   ����15  0000 1111
//	//˼·�������ʮ������1�ĸ���  n%10 �õ������Ƿ�Ϊ1   ��/10��ȥ��1��һλ��  
//	int n = 0;
//	printf("���������֣�");
//	scanf("%d",&n);
//	int count = count_bit_one(n);
//	printf("������ж����Ƶĸ���Ϊ��%d\n",count);
//}





//��������в�ͬλ�ĸ���  m��n�в���ͬ�Ķ�����λ��
//����һ��һλһλ�Ƚϣ��Ƚϵ�Ч��
//�����������

//int Get_count(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0; 
//	//tmp�洢����m n��������������λ����^��� ��ͬΪ0 ��ͬΪ1
//	//����Ҫ�ҵ���m��n�в�ͬ�Ķ�������  ���Ա���ת��Ϊ��tmp�ж�����λ1�ĸ���
//	//�������һ������ϵ������
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//tmp��tmp-1����ٴξͳ������ٸ�1  
//		count++;
//	}
// 	return count;
//}
//
////���ӣ�10��5�����Ʋ�ͬ�Ķ����Ƹ���
////1010 ---10
////0101 ---5
////��ͬ�ĸ���Ϊ4��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("������Ҫ�Ƚϵ��������֣�");
//	scanf("%d %d", &m, &n);
//	int count = Get_count(m, n);
//	printf("%d\n", count);
//	return 0;
//}




//��ȡһ��������������������������λ��ż��λ  �ֱ��ӡ����   
//�漰����֪ʶ�㣺��λ������  �ƶ�������λ�ֱ�λ����1
//void Get_bit(int n)
//{
//	//ʵ��˼·����ż���� ��ѭ��������� ��30��ʼÿ��-2(��ΪҪ��ͷ������)
//	//ע��ѭ������  >=0  
//	int i = 0;
//	for (i = 30; i >=0 ; i-=2)
//	{
//		printf("%d ",(n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��������");
//	scanf("%d", &n);
//	Get_bit(n);
//	return 0;
//}



//���ӣ�����������������ʹ����ʱ������
//int main()
//{
//	//����һ���Ӽ���(������)
//	//int a = 10;
//	//int b = 5;
//	//a = a - b;
//	//b = a + b;
//	//a = b - a;
//	//printf("%d %d",a,b);
//	//�����������(������  �����Ҳ����)  
//	//���ַ�������õİ취��Ҳ�����Ƽ��İ취�������������������Χ�ȴ���
//	//������ ^ : ��ͬΪ0 ������Ϊ1
//	//ǰ������ֵ��䣺��a = a ^ b�����͡�b = b ^ a�����൱��b = b ^ (a ^ b)����b ^ a ^ b����a ^ b ^ b��b ^ b�Ľ��Ϊ0����Ϊͬһ������������^�������Ϊ0�����b��ֵ����a ^ 0����a����ֵΪ10��
//	int a = 10;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}



//void Printff(int arr[], int sz) 
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	//ʹ��ָ���ӡ��������
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Printff(arr,sz);*/
//	for (int i = 0; i < sz; i++)
//	{
//		//arr������ͬ������Ԫ�ص�ַ
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//���ӣ�����һ�����ִ�ӡ��Ӧn*n�˷���
//int main()
//{
//	int n = 0;
//	printf("�����룺");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}


