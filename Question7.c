//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,j,temp=0;
    printf("Enter 10 numbers:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i =0; i <9; i++)
    {
        for ( j =i+1; j<10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("The second largest number is %d ",a[8]);
    return 0;
}