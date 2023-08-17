#include<stdio.h>

int main()
{
	int a1[3], a2[3], a3[3], b1[3], b2[3], b3[3], c1[3], c2[3], c3[3];

	for(int i=0; i<3; i++)
	{
		scanf("%d", &a1[i]);
		scanf("%d", &a2[i]);
		scanf("%d", &a3[i]);
		scanf("%d", &b1[i]);
		scanf("%d", &b2[i]);
		scanf("%d", &b3[i]);
	}
	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", a1[i]);
	} printf("]");
	printf("\t");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", b1[i]);
	} printf("]");
	printf("\n");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", a2[i]);
	} printf("]");
	printf("\t");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", b2[i]);
	} printf("]");
	printf("\n");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", a3[i]);
	} printf("]");
	printf("\t");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", b3[i]);
	} printf("]");
	printf("\n");

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3;j++)
		{
			if(i==0) c1[j]=a1[j]+b1[j];
			if(i==1) c2[j]=a2[j]+b2[j];
			if(i==2) c3[j]=a3[j]+b3[j];
		}
	}
	printf("\n");
	printf("Sum: \n");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", c1[i]);
	} printf("]");
	printf("\n");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", c2[i]);
	} printf("]");
	printf("\n");

	printf("[ ");
	for(int i=0; i<3; i++)
	{
		printf("%d ", c3[i]);
	} printf("]");
	printf("\n");

}

