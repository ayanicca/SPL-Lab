#include<stdio.h>>
int main ()
{
    int i,n,j,k;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

        for(k=i-1;k>=1;k--)
        {
            printf(" ");
        }
       for(j=n;j>=i;j--)
       {
           printf("%d",j);
       }
       printf("\n");
    }
    return 0;
}

