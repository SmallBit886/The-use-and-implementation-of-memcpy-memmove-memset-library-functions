#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ڴ��������
// 
//�ַ����������� strncpy
// char * strncpy ( char * destination, const char * source, size_t num );
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	//char* dest ,const char* src
//	strcpy(arr2, arr1);//���Ͳ�����
//
//	return 0;
//}

//1.11 memcpy ��ʹ�� --- void * memcpy ( void * destination, const void * source, size_t num );
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct stu arr3[] = { {"����",10},{"����",20} };
//	struct stu arr4[3] = { 0 };
//	//void* dest ,const void* src
//	//strcpy(arr2, arr1,sizeof(arr1));//���Ͳ�����
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}
// 
//�Լ�ʵ��
#include <assert.h>
//void* My_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	//char* dest ,const char* src
//	My_memcpy(arr2, arr1,sizeof(arr1));//���Ͳ�����
//
//	return 0;
//}

//1.12 memmove��ʹ�� --- void * memmove ( void * destination, const void * source, size_t num );
//memcpy --- ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove --- �����ص����ڴ濽��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//1 2   1 2 3 4 5   8 9 10
//	}
//	return 0;
//}

//�Լ�ʵ��
//void* My_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	My_memmove(arr, arr+2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//3 4 5 6 7   6 7 8 9 10
//	}
//	return 0;
//}

//1.13 memcmp ��ʹ�� --- int memcmp ( const void * ptr1,const void* ptr2,size_t num );
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//
//	int ret1 = memcmp(arr1, arr2, 8);
//	int ret2 = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret1);//0
//	printf("%d\n", ret2);//-1
//	return 0;
//}

//memset���ڴ����ã���ʹ��	void* memset(void* dest ,int c,size_t count);
int main()
{
	char arr1[10] = "";
	memset(arr1, '#', 10);
	printf("%s\n", arr1);//##########������fIڛ@�O
	int arr2[10] = { 0 };
	//01 01 01 01 01 01 01 01  01 01 
	memset(arr2, 1, 10);
	printf("%d\n", arr2[0]);//16843009
	return 0;
}