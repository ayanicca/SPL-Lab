#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }
     printf("Result:%d\n",sum);
    return 0;

}

