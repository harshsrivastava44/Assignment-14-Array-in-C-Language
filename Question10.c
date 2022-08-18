/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{   int n,a[10],i,j,temp=0,b[10];
  
    printf("Enter 10 numbers:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i =0; i <10; i++)
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
        b[i]=a[i];
    }
     for ( i =0; i <10; i--)
    printf("%d ",b[i]);
    return 0;
}