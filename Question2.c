/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],sum=0,i;
    float avg;
    printf("\nEnter array values :");
    for ( i = 0; i <=9; i++)
    {
      scanf("%d",&arr[i]);
      sum=sum+arr[i];
    }
    avg=sum/10.0;
    printf("Average of the number = %0.2f",avg);
    return 0;
    
}