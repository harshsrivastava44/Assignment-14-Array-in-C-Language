/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],i,max,temp=0 ;
    printf("\nEnter 10  numbers :\n");

    for(i=0;i<10;i++)
    {
     scanf("%d",&arr[i]);

    }
    max=arr[0];
    for ( i =0; i <10; i++)
    {
         if (max < arr[i])
            {
                temp=max;
                max=arr[i];
                arr[i]=temp;
            }

    }
    printf("The Greatest Numbers is  %d",max);
    return 0;
}
