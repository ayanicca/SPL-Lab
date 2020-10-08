#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial is: %d\n",fact);
    return 0;
}

