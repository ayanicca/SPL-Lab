#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter Nunber:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;


    }
     printf("The factorial is:%d\n",fact);
    return 0;
}

