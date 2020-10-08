#include<stdio.h>
int main ()
{
    int a[10],i;
    printf("Enter the numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The even numbers are: ");
    for(i=0; i<=9; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }


    }
     printf("\n");
    printf("The odd numbers are: ");
    for(i=0; i<=9; i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }


    }
    return 0;

}

