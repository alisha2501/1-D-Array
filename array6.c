//to delete an element of given index from an array//
#include<stdio.h>
int main()
{
	int pos, i;
	int a[]={1,6,3,9,15};
	int n= sizeof(a)/sizeof(a[0]);
	printf("Enter position to delete : ");
	scanf("%d", &pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

