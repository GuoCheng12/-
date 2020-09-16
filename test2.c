#define _CRT_SECURE_NO_WARNINGS 1
//此章解决字符串类型+转义字符+注释；
#include <stdio.h>
//字符串，由双引号引起的叫做字符串;字符，由单引号引起的叫做字符；
//例如
int main()
{
	
	//"abcdefg";
	//"123556";
	//"";//空字符串

	//char num1[]= "abc";
	////"abc"当中其实有四个字符 'a' 'b' 'c' 0   '\0'是字符串结束的标志 它隐藏正在字符串末尾
	//char num2[] = {'a', 'b', 'c', 0};
	////如果这样跑，会出现烫烫烫烫。如果加上一个字符0 ,则程序会与上面abc相同

	//printf ("%s\n",num1);
	//printf("%s\n",num2);

	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', 0};
	printf ("%d\n",strlen(arr1));// string length
	printf("%d\n",strlen(arr2));

	
	return 0;
}