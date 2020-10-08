#include<stdio.h>>
int main ()
{
    int i,n,j;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=n;j>=i;j--)
       {
           if(j%2==0)
           {
                printf("1");
           }
           else
            printf("0");
       }
       printf("\n");
    }
    return 0;
}

