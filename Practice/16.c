#include<stdio.h>
int main ()
{
    int n,i,k,fib=1;
    scanf("%d",&n);
    for(i=n; i>=1; i--)

    {

       fib=fib*i;
    }
    printf("%d\n",fib);
    return 0;

}
