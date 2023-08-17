#include<stdio.h>
void sort(int a[], int b[], n)
{
	int temp;
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(b[i]<b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}

		
}

int main()
{
  	int a[100], b[100], n;

	printf("Enter length of array: ");
	scanf("%d", &n);

	printf("Enter numbers: ");
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) printf("%d ", a[i]);

	printf("Enter numbers: ");
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	for(int i=0; i<n; i++) printf("%d ", b[i]);

	sort(a, b, n);
}
