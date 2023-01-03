//to multiply content of two arrays and store in the third//
#include<stdio.h>
int main()
{
	int arr3[5], l, i=0;
	int arr1[5]={2,1,5,3,6};
	int arr2[5]={4,7,8,11,10};
	l=sizeof(arr1)/sizeof(arr1[0]); 
	for(i=0;i<l;i++)
	{
		arr3[i]= arr1[i]*arr2[i];
	}
	for(i=0;i<l;i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
}
