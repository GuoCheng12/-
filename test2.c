#define _CRT_SECURE_NO_WARNINGS 1
//���½���ַ�������+ת���ַ�+ע�ͣ�
#include <stdio.h>
//�ַ�������˫��������Ľ����ַ���;�ַ����ɵ���������Ľ����ַ���
//����
int main()
{
	
	//"abcdefg";
	//"123556";
	//"";//���ַ���

	//char num1[]= "abc";
	////"abc"������ʵ���ĸ��ַ� 'a' 'b' 'c' 0   '\0'���ַ��������ı�־ �����������ַ���ĩβ
	//char num2[] = {'a', 'b', 'c', 0};
	////��������ܣ�������������̡��������һ���ַ�0 ,������������abc��ͬ

	//printf ("%s\n",num1);
	//printf("%s\n",num2);

	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', 0};
	printf ("%d\n",strlen(arr1));// string length
	printf("%d\n",strlen(arr2));

	
	return 0;
}