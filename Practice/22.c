#include<stdio.h>
void main()
{
    int n,i,m=1;

printf("Enter a Number:");
    scanf("%d",&n);
     printf("Output:");
    for(i=1; i<=n+1; i++)
    {
        m=m*i;

        printf("%d ",m);

    }


}
