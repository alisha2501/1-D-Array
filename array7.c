//Insert element at a given index in a array
#include<stdio.h>
int main()
{
    int arr[100]={11,34,12,56,24,67,89,98,90,34};
    int index, num, i, n=10;
    printf("Enter number to be inserted : ");
    scanf("%d", &num);
    printf("Enter index (0-9) : ");
    scanf("%d", &index);
    n++;
    for(i=9;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

