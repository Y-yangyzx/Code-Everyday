#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//����
//int main()
//{
//	//char arr[5] = {1,2,3,4,5};
//	char arr[] = "12345";
//	int sz = strlen(arr);
//	printf("%d\n",sz);
//	return 0;
//}



//***ð������  ��һ������ʵ�ֽ�������   �����鵱����������������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//��ȷ��ѭ��������
//	for (i = 0; i < sz-1; i++)
//	{
//		//��
//		int j = 0;
//		int flag = 1;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//	}
//}





//
////main ƴ���ˣ�����  ���³���û����ʾ    �߼�����/ƴ������
//int main()
//{
//	int i = 0;
//	int arr[] = { 2,1,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
