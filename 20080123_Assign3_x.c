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
	printf("��������������\n");
	scanf("%f",&dayrate);
	printf("����������\n");
	scanf("%d",&n);
	printf("�����뱾��\n");
	scanf("%f",&sum);

	for (i=1;i<=n;i++)
	{
		sum=((sum)*(1+dayrate));
	}
	printf("�������ǣ�%f\n",sum);
	printf("����������:%f\n",Yearrate);
	return 0;
}