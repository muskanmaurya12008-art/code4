#include<stdio.h>
int main()
{
    int A[5],i;
    printf("enter 5 number :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("reverce array:\n");
    for(i=4;i>=0;i--)
    {
    printf("%d",A[i]);
    }
    return 0;

    
}