#include<stdio.h>
int main ()
{
    int n,i,j=1,k,sum=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    {
        k=j*j;

        sum=sum+k;
        j++;


    }
    printf("Result:%d\n",sum);
    return 0;

}
