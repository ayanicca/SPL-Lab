#include<stdio.h>
int main ()
{
    int x[10];
    int i;

    printf("Enter The Number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The numbers in reverse order are: ");
    for(i=9;i>=0;i--)
    {
         printf("%d ",x[i]);
    }
    return 0;

}
