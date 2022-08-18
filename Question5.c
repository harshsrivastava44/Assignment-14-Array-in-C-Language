/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,temp=0,min;
    printf("Enter 10 numbers:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for ( i = 1; i <10; i++)
    {
        if (min>a[i])
        {
            temp=min;
            min=a[i];
            a[i]=temp;
        }
        
    }
    
    printf("The smallest number stored is %d",min);
    return 0;
}