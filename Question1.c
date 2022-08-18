/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("\nEnter the numbers :\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
    printf("\n RESULT\n The sum of the numbers stored in an array = %d ",sum);
    return 0;
}