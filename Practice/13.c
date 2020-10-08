#include<stdio.h>
int main ()
{
    int n,i,j=2,k,m,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)

    {
        k=i*i;
        sum=sum+k*j;
        j++;
    }
    printf("Result:%d\n",sum);
    return 0;

}
