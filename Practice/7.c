#include<stdio.h>
int main ()
{
    int n,i=1;
    scanf("%d",&n);
   printf("%d",i);
    for(i=2; i<=n; i++)
    {
        if(i%2==0)
            printf(",0");
            else
            printf(",1");



    }
    return 0;

}

