#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("B ");
        }
        else
            printf("A ");
    }
    return 0;
}

