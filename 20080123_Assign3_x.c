#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    double sum=50000;
	int n ;
	int i=0;
	double dayrate=1.0098e-4;
	double Yearrate =pow(1+dayrate,365);
	printf("请输入日利润率\n");
	scanf("%f",&dayrate);
	printf("请输入日期\n");
	scanf("%d",&n);
	printf("请输入本金\n");
	scanf("%f",&sum);

	for (i=1;i<=n;i++)
	{
		sum=((sum)*(1+dayrate));
	}
	printf("总利润是：%f\n",sum);
	printf("年利润率是:%f\n",Yearrate);
	return 0;
}